
#include "comm.h"
#include "def_klapany.h"

#ifdef FMS700
#include <assert.h>
#include "Lan.h"
#endif

void lan_out_klapany_run();
void lan_out_klapany_freeze(){lan_out_klapany_run();};
void lan_out_klapany_init(){};
void lan_out_klapany_terminate(){};

void lan_in_klapany_run();
void lan_in_klapany_freeze(){lan_in_klapany_run();};
void lan_in_klapany_init(){};
void lan_in_klapany_terminate(){};

void Read_Klapany();	// чтение виртуальных клапанов
void Set_Klapany();	// управление положением виртуальных приборов (модель-> клапаны) 

//*********************************************************************
//     управление положением виртуальных приборов (модель-> клапаны)
//*********************************************************************

void lan_out_klapany_run()
{
// управление положением виртуальных приборов (модель-> клапаны) 
 Set_Klapany();

 kl_buf_out.Tag = 2002;

#ifndef FMS700
 send_to_lan((struct msg_format_record *)&kl_buf_out,
                       CMD_KLAPANY,
	               tdk3_ws_id[KLAPANY_CPU_RT].station_id,
                       tdk3_ws_id[KLAPANY_CPU_RT].system_id,
                       sizeof(kl_buf_out),
			sizeof(kl_buf_out),
			0,0);
#else
 lan_send_klapans(&kl_buf_out, sizeof(kl_buf_out));
#endif
}

//*********************************************************************
//  информацию о состоянии положений ОУ приборов  (клапаны->модель)
//*********************************************************************

#ifndef FMS700
void lan_in_klapany_run()
{
	int lan_status ;
  int num_pak ;

for(num_pak=0; num_pak <4; num_pak++)
{
  lan_status = read_lan(KLAPANY_CPU_RT,
                       (char*)&kl_buf_in,
                        256,
                        0);

  if(lan_status == 0) break ;
   else
  if(lan_status < 0 || lan_status!=sizeof(kl_buf_in))	
  {
   (void)fprintf(stderr,"lan_in_klapany_run : *** LAN Read ERROR *** status = %d\n",lan_status);
   return;
  }

  // обработка принятого пакета - фиксировано 4 * u_int32
  // читаем информацию о состоянии положений ОУ приборов
   Read_Klapany();
 }
}
#else
void rcv(void *buf, size_t size, void *p)
{
	if(sizeof(kl_buf_in) > size)
		return;

	if (((KLAP_IN_BUFF*)buf)->Tag != 2003)
		return;

	memcpy(&kl_buf_in, buf, sizeof(kl_buf_in));

	Read_Klapany();
}

void lan_in_klapany_run()
{
	lan_receive_klapans(&rcv);
}
#endif

//*****************************************************************************************************
//	 управление от виртуальных приборов (клапаны -> модель)
//*****************************************************************************************************    
void Read_Klapany()
{
// переключатель БДУС на ПК Нептун
 if (Klapan3_to_model.bdus_1_1==1) { T2376=1; T2377=0;  T2378=0;}	// БДУС1-1(ИПП)
 if (Klapan3_to_model.bdus_1_2==1) { T2376=0; T2377=1;  T2378=0;}	// БДУС1-2(ИПП)
 if (Klapan3_to_model.bdus_1_3==1) { T2376=0; T2377=0;  T2378=1;}	// БДУС1-3(ИПП)

 // КВД БО СУ
 if ( Klapan1_to_model.kvd1_1==1){ K1753=1;	K1754=0;}	// КВД БО-СУ откр
 if ( Klapan1_to_model.kvd1_3==1){ K1754=1;	K1753=0;}	// КВД БО-СУ закр.

// ККТ
 if ( Klapan1_to_model.kvd2_3==1) K1755=1;		// ККТ открыт
 if ( Klapan1_to_model.kvd2_2==1) K1755=0;		// ККТ закрыт
 
// ККС
 if ( Klapan1_to_model.kvd2_1==1) K1757=1;		// КСС открыт
 if ( Klapan1_to_model.kvd2_2==1) K1757=0;		// КСС закрыт

// ЭПК РД 
 if (Klapan1_to_model.epk_rd_open==1)  { K1651=1; K1652=0; }	// ЭПК-РД откр.
 if (Klapan1_to_model.epk_rd_close==1) { K1652=1; K1651=0; }	// ЭПК-РД закр.
// if (Klapan3_to_model.epk_rd_produvka_open==1)	G1558=1;	//  ЭПК-РД продувка откр. (в rd_pars нет)
// if (Klapan3_to_model.epk_rd_produvka_close==1)	G1558=0;	//  ЭПК-РД продувка закр. (в rd_pars нет)

 // ЭПК ПСА
 if (Klapan1_to_model.psa_close==1)  { K1664 = 1; K1663 =0;}	// ЭПК-ПСА закр.
 if (Klapan1_to_model.psa_open ==1)  { K1663 = 1; K1664 =0;}	// ЭПК-ПСА откр.  

 // РПВ-1
   if (Klapan1_to_model.rpv1_1==1) { K1671=1;  K1670=0; K1667=0;}   // Клапан РПВ-1 откр. (в rd_pars закоментирован)
   if (Klapan1_to_model.rpv1_3 ==1){ K1671=0;  K1670=1; K1667=0;}   // Клапан РПВ-1 промежуточное состояние(в rd_pars нет)
   if (Klapan1_to_model.rpv1_2==1) { K1671=0;  K1670=0; K1667=1;}   //  Клапан РПВ-1 закр.
 // РПВ-2   
   if (Klapan1_to_model.rpv2_1==1) { K1674=1;  K1673=0; K1672=0;}  //	Клапан РПВ-2 откр.(в rd_pars закоментирован)
   if (Klapan1_to_model.rpv2_3==1) { K1674=0;  K1673=1; K1672=0;}  //	Клапан РПВ-2 промежуточное состояние (в rd_pars нет)
   if (Klapan1_to_model.rpv2_2==1) { K1674=0;  K1673=0; K1672=1;}  //	Клапан РПВ-2 закр.

 // КСД СУ
 //  if (Klapan3_to_model.k_ksd_1==1) K1751=1;	// Клапан КСД СУ (в rd_pars нет)
 //  if (Klapan3_to_model.k_ksd_2==1) K1751=0;	// Клапан КСД СУ (в rd_pars нет)
 
 // Заглушка КСД СУ
  if (Klapan3_to_model.l_ksd_1==1) K1761=1;	// Заглушка БО-СУ снята
  if (Klapan3_to_model.l_ksd_2==1) K1761=0;	// Заглушка БО-СУ установлена

 // ЭПК-П
   if (Klapan1_to_model.epk_p_open==1)   { K1647=1; K1650=0;}	// ЭПК-П откр
   if (Klapan1_to_model.epk_p_close ==1) { K1650=1; K1647=0;}	// ЭПК-П закр.

 // КВД СА-БО
   if (Klapan3_to_model.kvd_sa_bo_1==1)	K1675=1; 	// КВД СА-БО откр.
   if (Klapan3_to_model.kvd_sa_bo_2==1)	K1675=0;	// КВД СА-БО закр.
 
 // КСД БО
   if (Klapan1_to_model.ksd_close==1) {K1654=1;K1653=0; K_KSDE=0;}	// КСД БО Э/упр. закр
   if (Klapan1_to_model.ksd_open ==1) {K1653=1;K1654=0; K_KSDE=0;}	// КСД БО Э/упр. откр.
   if (Klapan1_to_model.ksd_eu==1) 	   K_KSDE=1;			// КСД БО Э/упр.
   
  // ККТ 
   if (Klapan1_to_model.kvd2_3==1)  K1755=1;	// ККТ открыт
   if (Klapan1_to_model.kvd2_2==1)  K1755=0;	// ККТ закрыт
   
  // ККС
   if (Klapan1_to_model.kvd2_1==1)	K1757=1;	//  КСС открыт
   if (Klapan1_to_model.kvd2_2==1)	K1757=0;	//  КСС закрыт
   
  // ХСА СА
   if (Klapan4_to_model.hsa_sa1==1) { K_xsa180=1;  K_xsa90=0; K_xsa0=0;}	// Кран ХСА-СА макс
   if (Klapan4_to_model.hsa_sa2==1) { K_xsa180=0;  K_xsa90=1; K_xsa0=0;} 	// Кран ХСА-СА мин
   if (Klapan4_to_model.hsa_sa3==1) { K_xsa180=0;  K_xsa90=0; K_xsa0=1;}	// Кран ХСА-СА выкл
   
 // ХСА БО
   if (Klapan4_to_model.hsa_bo1==1) { K1727=1; K1726=0; K1725=0; }		// Кран ХСА-БО макс
   if (Klapan4_to_model.hsa_bo2==1) { K1727=0; K1726=1; K1725=0; }		// Кран ХСА-БО мин
   if (Klapan4_to_model.hsa_bo3==1) { K1727=0; K1726=0; K1725=1; }		// Кран ХСА-БО выкл
 
 // БРУС
   if (Klapan2_to_model.brus4_1==1) K_BOSAO=1;  	// БОА СА осн(БРУС)
   if (Klapan2_to_model.brus4_2==1) K_BOSAO=0;		// БОА СА осн(БРУС)
   
   if (Klapan2_to_model.brus5_1==1) K_BOSAR=1;  	// БОА СА рез(БРУС)
   if (Klapan2_to_model.brus5_2==1) K_BOSAR=0;		// БОА СА рез(БРУС)
   
   if (Klapan2_to_model.brus7_1==1) K_EPKO=1; 		//-27В на вкл.ЭПК РД осн
   if (Klapan2_to_model.brus7_2==1) K_EPKO=0; 		//-27В на вкл.ЭПК РД осн
   
   if (Klapan2_to_model.brus8_1==1) K_EPKR=1;		// 27В на вкл. ЭПК РД рез.
   if (Klapan2_to_model.brus8_2==1) K_EPKR=0;  		// 27В на вкл. ЭПК РД рез.
                   
   if (Klapan2_to_model.brus_pbk_1 ==1) K1041=1; 	// ПБК вкл.
   if (Klapan2_to_model.brus_pbk_2 ==1) K1041=0;	// ПБК выкл.
   
   if (Klapan2_to_model.brus_rrst_1==1) K1763=1;	// Разрешение РРСТ есть
   if (Klapan2_to_model.brus_rrst_2==1) K1763=0;	// Разрешение РРСТ нет

  // БРУБ 
   if (Klapan3_to_model.brub1_1==1) K_BOBOO=1;  	// БОА БО осн(БРУБ)
   if (Klapan3_to_model.brub1_2==1) K_BOBOO=0; 		// БОА БО осн(БРУБ)
   
   if (Klapan3_to_model.brub2_1==1) K_BOBOR=1;		// БОА БО рез(БРУБ)
   if (Klapan3_to_model.brub2_2==1) K_BOBOR=0; 		// БОА БО рез(БРУБ)

   // вентиляторы скафандров
   if (Klapan3_to_model.pzvs1_1==1) K1765=1;	//  КК (ВС1) Вкл.  
   if (Klapan3_to_model.pzvs1_2==1) K1765=0;	//  КК (ВС1) Выкл. 
   
   if (Klapan3_to_model.pzvs2_1==1) K1767=1; 	// БИ (ВС2) Вкл.
   if (Klapan3_to_model.pzvs2_2==1) K1767=0;	// БИ (ВС2) Выкл. 
   
   if (Klapan3_to_model.pzvs3_1==1) K1771=1; 	// КИ (ВС3) Вкл.
   if (Klapan3_to_model.pzvs3_2==1) K1771=0;	// КИ (ВС3) Выкл.
   
 // Люк БО СУ  
  if (Klapan1_to_model.bo_su_open==1)  K1037=1; // Люк БО-СУ открыт.
  if (Klapan1_to_model.bo_su_close==1) K1037=0; // Люк БО-СУ закрыт.
  
 // Люк СА БО
  if (Klapan1_to_model.bo_sa_open==1)  K1701=1; // Люк СА-БО открыт
  if (Klapan1_to_model.bo_sa_close==1) K1701=0; // Люк СА-БО закрыт
  
 // Люк ОБ СУ 
 // if (Klapan3_to_model.ob_su_1==1)  KP_XXX=1;    // Люк ОБ СУ открыт (было krl_D3=1)
 // if (Klapan3_to_model.ob_su_2==1)  KP_XXX=1;    // Люк ОБ СУ закрыт (было krl_D4=1)
  
 // конденсат СА БО
  if (Klapan1_to_model.bo_kond_bo==1) K7562=1;	// Конденсат БО
  if (Klapan1_to_model.bo_kond_sa==1) K7561=1;	// Конденсат СА
 
// ДСД
  if (__DSD==4) K1720=1;	// ПГ ДСД "550"
  if (__DSD==5) K1717=1;	// ПГ ДСД "580"
  if (__DSD==6) K1716=1;	// ПГ ДСД "610"
  if (__DSD==7) K1715=1;	// ПГ ДСД "640"
  if (__DSD==8) K1714=1;	// ПГ ДСД "670"

 /* было:
 if (__DSD==1) K1720=1;
  if (__DSD==2) K1717=1;
  if (__DSD==3) K1716=1;
  if (__DSD==4) K1715=1;
  if (__DSD==5) K1714=1;
  if (__DSD==6) K1713=1;	// 700" есть в rd_pars
  if (__DSD==7) K1712=1;	// "730"  есть в rd_pars
  if (__DSD==8) K1711=1;	// "760" есть в rd_pars
  if (__DSD==9) K1710=1;	// "790" есть в rd_pars
  if (__DSD==10) K1707=1;	// "820" есть в rd_pars
				 K1705=1	// "850" есть в rd_pars
  if (__DSD==11) K1655=10; // нет в rd_pars
  */

  
  
 /* не найдены соответствия (в rd_pars   есть еще)
DBHz         0 0 0   OSA_DIN  0 0 0x3100 5 5  0 0 0 0  0  # Заслонка ДВН закр.(дыхательные вентиляторы нагнетателей)
DBBz         0 0 0   OSA_DIN  0 0 0x3100 5 6  0 0 0 0  0  # Заслонка ДВВ закр.

K_BOSAap     0 0 0   OSA_DIN  0 0 0x3200 3 0  0 0 0 0  0  # БОА СА режим - автомат
K_BOSAOp     0 0 0   OSA_DIN  0 0 0x3200 3 1  0 0 0 0  0  # БОА СА осн. пер.
K_BOSARp     0 0 0   OSA_DIN  0 0 0x3200 3 2  0 0 0 0  0  # БОА СА рез. пер.
K_BOBOap     0 0 0   OSA_DIN  0 0 0x3200 3 3  0 0 0 0  0  # БОА БО автомат
K_BOBOOp     0 0 0   OSA_DIN  0 0 0x3200 3 4  0 0 0 0  0  # БОА БО осн. пер.
K_BOBORp     0 0 0   OSA_DIN  0 0 0x3200 3 5  0 0 0 0  0  # БОА БО рез.пер.
koc          0 0 0   OSA_DIN  0 0 0x3100 7 6  0 0 0 0  0  # Отстрел стренг ОСП, ЗСП
kovk3        0 0 0   OSA_DIN  0 0 0x3100 7 7  0 0 0 0  0  # Открыт КСД БО

*/

// ... БРУС1 ................................................
	if (Klapan2_to_model.brus1_1==1) dummy_brus1=1; 
	if (Klapan2_to_model.brus1_2==1) dummy_brus1=0;
// ... БРУС2 .................................................
	if (Klapan2_to_model.brus2_1==1) dummy_brus2=1; 
	if (Klapan2_to_model.brus2_2==1) dummy_brus2=0;
// ... БРУС3 .................................................
	if (Klapan2_to_model.brus3_1==1) dummy_brus3=1; 
	if (Klapan2_to_model.brus3_2==1) dummy_brus3=0;	
//.... включение вент ВСА для мнемо ..........................
	if (Klapan2_to_model.brus6_1==1) {X_vsa=1;}  
	if (Klapan2_to_model.brus6_2==1) {X_vsa=0;}
//...  ПБК-Д вкл. ............................................
	if (Klapan2_to_model.brus_1m_1==1) K_PBKD=1;    
	if (Klapan2_to_model.brus_1m_2==1) K_PBKD=0;
//.... вкл света 1 на БРУС?? .................................	
	if (Klapan2_to_model.brus_vp1_1==1) dummy_brus_vp1=1; 
	if (Klapan2_to_model.brus_vp1_2==1) dummy_brus_vp1=0;
//.... выкл 2 на БРУС?? вкл 2светильников в СА с КСП Р11......
	if (Klapan2_to_model.brus_vp2_1==1) dummy_brus_vp2=1; 
	if (Klapan2_to_model.brus_vp2_2==1) dummy_brus_vp2=0;
//.....регулятор освещения ?? .................................
	if (Klapan2_to_model.brus_sro_1==1) dummy_brus_sro=1;
	if (Klapan2_to_model.brus_sro_2==1) dummy_brus_sro=0;
	
    if (Klapan3_to_model.brub5_1==1) {X_vbo=1;}//vent vbo for mnemo
    if (Klapan3_to_model.brub5_2==1) {X_vbo=0;}
    if (Klapan3_to_model.brub6_1==1) dummy_brub6=1; //АСУ
    if (Klapan3_to_model.brub6_2==1) dummy_brub6=0;
    if (Klapan2_to_model.brubL_1==1) dummy_brub_left=1;//СРО БО БРУБ
    if (Klapan2_to_model.brubL_2==1) dummy_brub_left=0;
    if (Klapan2_to_model.brubR_1==1) dummy_brub_richt=1;// БРУБ
    if (Klapan2_to_model.brubR_2==1) dummy_brub_richt=0;

//........запасной двигатель вентилятора1 ..................................
    if (Klapan4_to_model.zdv1_o == 1) dummy_zdv1=1; 
    if (Klapan4_to_model.zdv1_c == 1) dummy_zdv1=0;
//........запасной двигатель вентилятора2 ..................................
    if (Klapan4_to_model.zdv2_o == 1 ) dummy_zdv2=1;
    if (Klapan4_to_model.zdv2_c == 1 ) dummy_zdv2=0;

//......Ручной Антенный Переключатель РАП-7 ................................
    if(Klapan4_to_model.RAP_7_1==1) dummy_RAP_7=1; 
    if(Klapan4_to_model.RAP_7_2==1) dummy_RAP_7=0;

// БР-1 блок распределительный 1-1	 
    if (Klapan4_to_model.BR1_1==1) { dummy_BR1_12=1; dummy_BR1=0; dummy_BR1_13=0;}else
// БР-1 блок распределительный 1-2
    if (Klapan4_to_model.BR1_2==1) { dummy_BR1_12=0; dummy_BR1=1; dummy_BR1_13=0;}else
// БР-1 блок распределительный 1-3
	if (Klapan4_to_model.BR1_3==1) { dummy_BR1_12=0; dummy_BR1=0; dummy_BR1_13=1;}

// РАП-10 Ручной Антенный Переключатель полож1	 
	if(Klapan4_to_model.RAP_10_1==1) { dummy_RAP_10_1=1; dummy_RAP_10_2=0; dummy_RAP_10_3=0;}else
// РАП-10 Ручной Антенный Переключатель полож2
	if(Klapan4_to_model.RAP_10_2==1) { dummy_RAP_10_1=0; dummy_RAP_10_2=1; dummy_RAP_10_3=0;}else 
//  РАП-10 Ручной Антенный Переключатель полож3
	if(Klapan4_to_model.RAP_10_3==1) { dummy_RAP_10_1=0; dummy_RAP_10_2=0; dummy_RAP_10_3=1;}
//  БАРД блок автом регулирования давления полож1	
	if(Klapan4_to_model.BAPD_1==1) { dummy_BARD_1=1; dummy_BARD_2=0; dummy_BARD_3=0;}else
// БАРД блок автом регулирования давления полож2
	if(Klapan4_to_model.BAPD_2==1) { dummy_BARD_1=0; dummy_BARD_2=1; dummy_BARD_3=0;}else
// БАРД блок автом регулирования давления полож3
	if(Klapan4_to_model.BAPD_3==1) { dummy_BARD_1=0; dummy_BARD_2=0; dummy_BARD_3=1;}
// CТОПОР на люке СА-БО со стороны СА
    if (Klapan4_to_model.Stopor_SA_1==1) dummy_Stopor_SA=1;
    if (Klapan4_to_model.Stopor_SA_2==1) dummy_Stopor_SA=0;
  
  
 //if (Klapan3_to_model.rrj_7==1) __NASTR_RRJ_7=1;
 //if (Klapan3_to_model.rrj_12==1) __NASTR_RRJ_12=1;      
 //if (Klapan3_to_model.rrj_17==1) __NASTR_RRJ_17=1;

}

//******************************************************************************************************
// 		 управление положением виртуальных приборов (модель-> клапаны) 
//******************************************************************************************************
void Set_Klapany()
{
//........ мановакууметр...........
 __P_MANUVAK = (int)WR6705;
 
 // ДСД
//if (K1720==1) __SET_DSD=520;
//if (K1717==1) __SET_DSD=610;
//if (K1716==1) __SET_DSD=700;
//if (K1715==1) __SET_DSD=790;
//if (K1714==1) __SET_DSD=880; 
if (G570==1) __SET_DSD=520;
if (G567==1) __SET_DSD=610;
if (G566==1) __SET_DSD=700;
if (G565==1) __SET_DSD=790;
if (G563==1) __SET_DSD=880; 

//........ показания вольтметра.............
  if(__KONTROL_IP) // нажата кнопка "контроль ИП"
   {
     if (B1273)	// разделение
		__SET_U_VOLTM= 0;
	 else
     		__SET_U_VOLTM= (int)EP6401;  
   } 
  else
  __SET_U_VOLTM= (int)(EP6401-1);
  

 //............... КСД БО..................
  if (G1613==0) 	// закрыт 
      {
        Klapan1.ksd_close=1;
        Klapan1.ksd_eu=0;
        Klapan1.ksd_open=0;
     }

  if (G1613 ==1)  //	открыт 
      {
        Klapan1.ksd_close=0;
        Klapan1.ksd_eu=0;
        Klapan1.ksd_open=1;

      }
   if (S_KSDE==1) 	// электроуправление
       {
        Klapan1.ksd_close=0;
        Klapan1.ksd_eu=1;
        Klapan1.ksd_open=0;
  	}
	
//..........ЭПК ПСА ...............................
 if (G1610==0)		//закрыт
      {
        Klapan1.psa_close=1;
       // Klapan1.psa_litle=0;
        Klapan1.psa_open=0;
     }

 if (G1610==1) 		//открыт
      {
        Klapan1.psa_close=0;
       // Klapan1.psa_litle=0;
        Klapan1.psa_open=1;
      }
/*
 if (Klapan1_to_model.psa_litle==1)
       {
        Klapan1.psa_close=0;
        Klapan1.psa_litle=1;
        Klapan1.psa_open=0;
      }
 */     	

//........... РПВ-1 .............................................
  if (GR7173>0.9)                        //open
      {
        Klapan1.rpvA_0=1;
        Klapan1.rpvA_1=0;
      }
  if ((GR7173>0.1)&&(GR7173<0.9))        //prom
      {
        Klapan1.rpvA_0=1;
        Klapan1.rpvA_1=1;
       }
  if (GR7173<0.1)                         //close
       {
        Klapan1.rpvA_0=0;
        Klapan1.rpvA_1=1;
      }
      
//........... РПВ-1 .............................................
    if (GR7174>0.9)                          //open
      {
        Klapan1.rpvB_0=1;
        Klapan1.rpvB_1=0;
     }
  if ((GR7174>0.1)&&(GR7174<0.9))           //prom  
      {
        Klapan1.rpvB_0=1;
        Klapan1.rpvB_1=1;
      }
  if (GR7174<0.1)                            //close
       {
        Klapan1.rpvB_0=0;
        Klapan1.rpvB_1=1;
      }     

//....... ЭПК-П ...............................................
  if (G1611==1) //open
      {
        Klapan1.epk_p_open=1;
        Klapan1.epk_p_close=0;
      }

  if (G1611==0)  //close
      {
        Klapan1.epk_p_open=0;
        Klapan1.epk_p_close=1;              
      }

//............ ЭПК-РД .........................................
   if (G1612==1)//open
      {
        Klapan1.epk_rd_open=1;
        Klapan1.epk_rd_close=0;
      }

  if (G1612==0) //close
      {
        Klapan1.epk_rd_open=0;
        Klapan1.epk_rd_close=1;
      }   
   if (G1558==1)//produvka
      {
        Klapan1.epk_rd_produvka=1;
      }

  if (G1558==0) 
      {
        Klapan1.epk_rd_produvka=0;
     }  
	 
//............. КВД БО-СУ ..................................................
    if (W604==1) //open
      {
        Klapan1.kvd1_1=1;    
        Klapan1.kvd1_3=0;
     }
    
    if (W604==0) //close
      {
        Klapan1.kvd1_1=0;
        Klapan1.kvd1_3=1;
     } 
     
//............ККС открыт.................................................         
      if (W602==1)
      {
        Klapan1.kvd2_1=1;
        Klapan1.kvd2_2=0;
        Klapan1.kvd2_3=0;
     }
//............ККТ ККС закрыт.................................................          
     
    if ((W600==0)&&(W602==0))
      {
        Klapan1.kvd2_1=0;
        Klapan1.kvd2_2=1;
        Klapan1.kvd2_3=0;
     }
//............ККТ открыт.................................................        
    if (W600==1)
      {
        Klapan1.kvd2_1=0;
        Klapan1.kvd2_2=0;
        Klapan1.kvd2_3=1;
     } 	
//...........КВД СА БО ...................................................
    if (G1771==1) Klapan1.kvd_sa_bo=0; //Open
    if (G1771==0) Klapan1.kvd_sa_bo=1;//Close


//........... Люк СА БО ...................................................
  if (Q33==0) Klapan1.bo_sa=1; //ъБЛТ
  if (Q33==1) Klapan1.bo_sa=0; //пФЛТ
    
//........... Люк БО СУ ...................................................  
  if (Q57==0)  Klapan1.bo_su=1;  //ъБЛТ
  if (Q57==1)  Klapan1.bo_su=0;  //пФЛТ
  
//............ Конденсат СА БО ............................................
  if (X6136==1) Klapan2.bo_kon=0;	//Конденсат БО
  if (X6135==1) Klapan2.bo_kon=1;	//Конденсат СА

//........... Люк ОБ СУ ...................................................
  if (H1030==1)  Klapan1.ob_su=1;    //open
  if (H1030==0)  Klapan1.ob_su=0;    //close

//............ КВД СУ ОБ ..................................................
  if (W646== 1) Klapan2.k_kvd=1; //ПФЛТ
  if (W646== 0) Klapan2.k_kvd=0;
  
//............. КСД СУ ....................................................
  if (W606== 1) Klapan2.k_ksd=1; //ПФЛТ
  if (W606== 0) Klapan2.k_ksd=0;
  
//............. Заглушка КСД СУ (K1671)...................................
  if (W610==1) Klapan2.l_ksd=1; // УОСФБ
  if (W610==0) Klapan2.l_ksd=0; // ХУФБОПЧМЕОБ

//............... переключатель БДУС ......................................
        if (T2376==1)  // БДУС 1
         {
          Klapan2.bdus_1_2=1;
          Klapan2.bdus_ot3=0;
         }
          if (T2377==1) // БДУС 2
         {
          Klapan2.bdus_1_2=0;
          Klapan2.bdus_ot3=1;
         }
          if (T2378==1) // БДУС 3
         {
          Klapan2.bdus_1_2=1;
          Klapan2.bdus_ot3=1;
         }
// ............. ПЗВС ....................................................
        if (E6231==1)   Klapan2.pzvs1=1;else  Klapan2.pzvs1=0;
        if (E6232==1)   Klapan2.pzvs2=1;else  Klapan2.pzvs2=0;
        if (E6233==1)   Klapan2.pzvs3=1;else  Klapan2.pzvs3=0;   

//.............. ХСА СА, ХСА БО .........................................
   if (/*X6106*/X6046==1) // ЧЩЛМ
         {
          Klapan3.hsa1_0=1;
          Klapan3.hsa1_1=0;
         }
          if (X6077==1) // MIN
         {
           Klapan3.hsa1_0=0;
          Klapan3.hsa1_1=1;
         }
          if (/*X6046*/X6106==1) // max
         {
          Klapan3.hsa1_0=1;
          Klapan3.hsa1_1=1;
         }
  if (X6152==1) // НБЛУ
         {
           Klapan3.hsa2_0=1;
          Klapan3.hsa2_1=0;
         }
          if (X6151==1)	// НЙО
         {
           Klapan3.hsa2_0=0;
          Klapan3.hsa2_1=1;
         }
          if (X6150==1)//ЧЩЛМ
         {
          Klapan3.hsa2_0=1;
          Klapan3.hsa2_1=1;		
	}	
//.................. РРЖ .........................................
/*
        if (Resv_b[47])               //7
	 {
           Klapan2.rrj_7_12=1;
           Klapan2.rrj_ot17=0;
         }
          if (Resv_b[49])                       //12
         {
           Klapan2.rrj_7_12=0;
           Klapan2.rrj_ot17=1;
         }
          //if (K1065==1)
         if (Resv_b[48])                        //17
		{
           Klapan2.rrj_7_12=1;
           Klapan2.rrj_ot17=1;
         }
*/	



//............ БРУС ..............................................
	if ( dummy_brus1) Klapan2.brus1=1;else Klapan2.brus1=0; //БРУС1 
	if (dummy_brus2)  Klapan2.brus2=1;else  Klapan2.brus2=0;//БРУС2
	if (dummy_brus3)  Klapan2.brus3=1;else  Klapan2.brus3=0;//БРУС3
	if (K_BOSAO==1)  Klapan2.brus4=1;//open
	if (K_BOSAO==0)  Klapan2.brus4=0; //close
	if (K_BOSAR==1)  Klapan2.brus5=1; //open
	if (K_BOSAR==0)  Klapan2.brus5=0; //close
	if (X_vsa)  Klapan2.brus6=1;else Klapan2.brus6=0;//вентилятор СА
	if (K_EPKO==1)  Klapan2.brus7=1;
	if (K_EPKO==0)  Klapan2.brus7=0;
	if (K_EPKR==1)  Klapan2.brus8=1;
	if (K_EPKR==0)  Klapan2.brus8=0;
	if (GSR4==1) Klapan2.brus_rrst=1;
	if (GSR4==0) Klapan2.brus_rrst=0;
	if (K_PBKD) Klapan2.brus_1m=1;else Klapan2.brus_1m=0;
	if (G1609==1)  Klapan2.brus_pbk=1;
	if (G1609==0)  Klapan2.brus_pbk=0;
	if (dummy_brus_vp1) Klapan2.brus_vp1=1;else Klapan2.brus_vp1=0;
	if (dummy_brus_vp2)  Klapan2.brus_vp2=1;else Klapan2.brus_vp2=0;
	if (dummy_brus_sro) Klapan2.brus_sro=1;else Klapan2.brus_sro=0;

//............ БРУБ ..............................................

       if (K_BOBOO==1) Klapan1.brub1=1;
       if (K_BOBOO==0) Klapan1.brub1=0;
       if (K_BOBOR==1) Klapan1.brub2=1;
       if (K_BOBOR==0) Klapan1.brub2=0;
       
       if (X_vbo) Klapan1.brub5=1;else Klapan1.brub5=0;//вентилятор БО
       if (dummy_brub6) Klapan1.brub6=1;else Klapan1.brub6=0;
       if (dummy_brub_left) Klapan1.brub_left=1;else Klapan1.brub_left=0; //СРО БО БРУБ
       if (dummy_brub_richt) Klapan1.brub_richt=1;else Klapan1.brub_richt=0; // БРУБ

//............. ЗДВ ...........................................
  if (dummy_zdv1 ) Klapan3.zdv1=1;else Klapan3.zdv1=0; //запасной двигатель вентилятора1
   if(dummy_zdv2) Klapan3.zdv2=1;else Klapan3.zdv2=0; //запасной двигатель вентилятора2


//............. новые параметры ..............................
 Klapan3.RAP_7=dummy_RAP_7;   //  Ручной Антенный Переключатель РАП-7
 Klapan3.BR1_1= dummy_BR1_12;	// БР-1 ПФЛБЪ блок распределительный 1-2
 Klapan3.BR1_2= dummy_BR1;	    // БР-1 ОПТНБМ	блок распределительный 
 Klapan3.BR1_3= dummy_BR1_13;	// БР-1 ПФЛБЪ блок распределительный 1-3

 Klapan3.RAP_10_1= dummy_RAP_10_1;	// ОЕФ РАП-10 Ручной Антенный Переключатель полож1
 Klapan3.RAP_10_2= dummy_RAP_10_2; // ОЕФ РАП-10 Ручной Антенный Переключатель полож2
 Klapan3.RAP_10_3= dummy_RAP_10_3; // ОЕФ  РАП-10 Ручной Антенный Переключатель полож3

 Klapan3.BAPD_1=dummy_BARD_1;	// вбтд БЧФПНБФ БАРД блок автом регулирования давления полож1
 Klapan3.BAPD_2=dummy_BARD_2;	// вбтд ПУОПЧОПК БАРД блок автом регулирования давления полож 2
 Klapan3.BAPD_3=dummy_BARD_3;	// вбтд ДХВМЙТХАЭЙК БАРД блок автом регулирования давления полож 3


 Klapan1.Stopor_SA=dummy_Stopor_SA;	// УФПРПТ МАЛБ CТОПОР на люке СА-БО со стороны СА
 
}

