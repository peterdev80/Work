

struct {
        unsigned bt0:1;
        unsigned bt1:1;
        unsigned bt2:1;
        unsigned bt3:1;
        unsigned bt4:1;
        unsigned bt5:1;
        unsigned bt6:1;
        unsigned bt7:1;
        unsigned bt8:1;
        unsigned bt9:1;
        unsigned bt10:1;
        unsigned bt11:1;
        unsigned bt12:1;
        unsigned bt13:1;
        unsigned bt14:1;
        unsigned bt15:1;
        unsigned bt16:1;
        unsigned bt17:1;
        unsigned bt18:1;
        unsigned bt19:1;
        unsigned bt20:1;
        unsigned bt21:1;
        unsigned bt22:1;
        unsigned bt23:1;
        unsigned bt24:1;
        unsigned bt25:1;
        unsigned bt26:1;
        unsigned bt27:1;
        unsigned bt28:1;
        unsigned bt29:1;
        unsigned bt30:1;
        unsigned bt31:1;
       } KDU_1;
	   struct {
        unsigned bt0:1;
        unsigned bt1:1;
        unsigned bt2:1;
        unsigned bt3:1;
        unsigned bt4:1;
        unsigned bt5:1;
        unsigned bt6:1;
        unsigned bt7:1;
        unsigned bt8:1;
        unsigned bt9:1;
        unsigned bt10:1;
        unsigned bt11:1;
        unsigned bt12:1;
        unsigned bt13:1;
        unsigned bt14:1;
        unsigned bt15:1;
        unsigned bt16:1;
        unsigned bt17:1;
        unsigned bt18:1;
        unsigned bt19:1;
        unsigned bt20:1;
        unsigned bt21:1;
        unsigned bt22:1;
        unsigned bt23:1;
        unsigned bt24:1;
        unsigned bt25:1;
        unsigned bt26:1;
        unsigned bt27:1;
        unsigned bt28:1;
        unsigned bt29:1;
        unsigned bt30:1;
        unsigned bt31:1;
       } KDU_2;
	   struct {
        unsigned bt0:1;
        unsigned bt1:1;
        unsigned bt2:1;
        unsigned bt3:1;
        unsigned bt4:1;
        unsigned bt5:1;
        unsigned bt6:1;
        unsigned bt7:1;
        unsigned bt8:1;
        unsigned bt9:1;
        unsigned bt10:1;
        unsigned bt11:1;
        unsigned bt12:1;
        unsigned bt13:1;
        unsigned bt14:1;
        unsigned bt15:1;
        unsigned bt16:1;
        unsigned bt17:1;
        unsigned bt18:1;
        unsigned bt19:1;
        unsigned bt20:1;
        unsigned bt21:1;
        unsigned bt22:1;
        unsigned bt23:1;
        unsigned bt24:1;
        unsigned bt25:1;
        unsigned bt26:1;
        unsigned bt27:1;
        unsigned bt28:1;
        unsigned bt29:1;
        unsigned bt30:1;
        unsigned bt31:1;
       } KDU_3;
	   struct {
        unsigned bt0:1;
        unsigned bt1:1;
        unsigned bt2:1;
        unsigned bt3:1;
        unsigned bt4:1;
        unsigned bt5:1;
        unsigned bt6:1;
        unsigned bt7:1;
        unsigned bt8:1;
        unsigned bt9:1;
        unsigned bt10:1;
        unsigned bt11:1;
        unsigned bt12:1;
        unsigned bt13:1;
        unsigned bt14:1;
        unsigned bt15:1;
        unsigned bt16:1;
        unsigned bt17:1;
        unsigned bt18:1;
        unsigned bt19:1;
        unsigned bt20:1;
        unsigned bt21:1;
        unsigned bt22:1;
        unsigned bt23:1;
        unsigned bt24:1;
        unsigned bt25:1;
        unsigned bt26:1;
        unsigned bt27:1;
        unsigned bt28:1;
        unsigned bt29:1;
        unsigned bt30:1;
        unsigned bt31:1;
       } KDU_4;
	   struct {
        unsigned bt0:1;
        unsigned bt1:1;
        unsigned bt2:1;
        unsigned bt3:1;
        unsigned bt4:1;
        unsigned bt5:1;
        unsigned bt6:1;
        unsigned bt7:1;
        unsigned bt8:1;
        unsigned bt9:1;
        unsigned bt10:1;
        unsigned bt11:1;
        unsigned bt12:1;
        unsigned bt13:1;
        unsigned bt14:1;
        unsigned bt15:1;
        unsigned bt16:1;
        unsigned bt17:1;
        unsigned bt18:1;
        unsigned bt19:1;
        unsigned bt20:1;
        unsigned bt21:1;
        unsigned bt22:1;
        unsigned bt23:1;
        unsigned bt24:1;
        unsigned bt25:1;
        unsigned bt26:1;
        unsigned bt27:1;
        unsigned bt28:1;
        unsigned bt29:1;
        unsigned bt30:1;
        unsigned bt31:1;
       } KDU_5;
	   
       struct {
        unsigned bt0:2;
        unsigned bt1:1;
        unsigned bt2:1;
        unsigned bt3:1;
        unsigned bt4:1;
        unsigned bt5:1;
        unsigned bt6:1;
        unsigned bt7:1;
        unsigned bt8:1;
        unsigned bt9:1;
        unsigned bt10:1;
        unsigned bt11:1;
        unsigned bt12:1;
        unsigned bt13:1;
        unsigned bt14:1;
        unsigned bt15:1;
        unsigned bt16:1;
        unsigned bt17:1;
        unsigned bt18:1;
        unsigned bt19:1;
        unsigned bt20:1;
        unsigned bt21:1;
        unsigned bt22:1;
        unsigned bt23:1;
        unsigned bt24:1;
        unsigned bt25:1;
        unsigned bt26:1;
        unsigned bt27:1;


       } Mnemores_51;



////////////начала работы процедуры первоночально марш-
///////////руты ДПО беруться из модели затем им присваевается
///////////вслучае работы значение 2
void KDU_Init(void)
{
  

    __KDU_1 = 0;
    __KDU_2 = 0;
    __KDU_3 = 0;
    __KDU_4 = 0;
    __KDU_5 = 0;
     __MNEMO_RES_51=0;
   
	

MZ(&KDU_1);
MZ(&KDU_2);
MZ(&KDU_3);
MZ(&KDU_4);
MZ(&KDU_5);
MZ(&Mnemores_51);


}
void UpravKDU(void)
{



MZ(&KDU_1);
MZ(&KDU_2);
MZ(&KDU_3);
MZ(&KDU_4);
MZ(&KDU_5);
MZ(&Mnemores_51);

KDU_5.bt0= MS1FillPipeHelBtl1;													/* Заполнение магистралей ШБ 1 секции гелием высокого давления */
KDU_5.bt1= MS1FillPipeHelBtl2;													/* Заполнение магистралей ШБ 2 секции гелием высокого давления */

KDU_5.bt2= MS1FillPipeAV1;
KDU_5.bt3= MS1FillPipeAV2;
KDU_5.bt4= MS1FillPipeAV3;
KDU_5.bt5= MS1FillPipeAV4;
KDU_5.bt6= MS1FillPipeAV5;
KDU_5.bt7= MS1FillPipeAV6;

KDU_5.bt8= MS1FillPipeS1;
KDU_5.bt9= MS1FillPipeS2;
KDU_5.bt10= MS1FillPipeSE;


KDU_5.bt23= MS1FillPipeEPSV1;
KDU_5.bt24= MS1FillPipeEPSV2;

/* Подсистема КДУ */
KDU_5.bt11= MS1FillPipeOxiTank1;
KDU_5.bt12= MS1FillPipeOxiTank2;
KDU_5.bt13= MS1FillPipeFuelTank1;
KDU_5.bt14= MS1FillPipeFuelTank2;



KDU_5.bt15= MS1FillPipeACE_Oxi;
KDU_5.bt16 =MS1FillPipeACE_Fuel;

/* Подсистема ДПО */
KDU_5.bt17= MS1FillPipeOxiCol1;
KDU_5.bt18= MS1FillPipeOxiCol2;
KDU_5.bt19= MS1FillPipeFuelCol1;
KDU_5.bt20= MS1FillPipeFuelCol2;



KDU_3.bt18= MS1ActivePipeSCharge1by1;
KDU_3.bt21= MS1ActivePipeSCharge1by2;
KDU_3.bt24= MS1ActivePipeSCharge1byAll;
KDU_3.bt19= MS1ActivePipeSCharge2by2;
KDU_3.bt20= MS1ActivePipeSCharge2by1;
KDU_3.bt25= MS1ActivePipeSCharge2byAll;
KDU_3.bt23= MS1ActivePipeSChargeAllby1;
KDU_3.bt22= MS1ActivePipeSChargeAllby2;

KDU_3.bt27= MS1ActivePipeSChargeOxi1;
KDU_3.bt28= MS1ActivePipeSChargeOxi2;
KDU_3.bt26= MS1ActivePipeSChargeFuel1;
KDU_3.bt29= MS1ActivePipeSChargeFuel2;

/* Поступление топлива к СКД */
KDU_3.bt0= MS1ActivePipeACEbyOxi1;
KDU_3.bt8= MS1ActivePipeACEbyOxi2;
KDU_3.bt1= MS1ActivePipeACEbyFuel1;
KDU_3.bt9= MS1ActivePipeACEbyFuel2;

/* Поступление топлива к коллекторам */
KDU_3.bt10= MS1ActivePipeCol1byOxi1Way1;
KDU_3.bt12= MS1ActivePipeCol1byOxi1Way2;
KDU_3.bt16= MS1ActivePipeCol1byOxi2Way1;
KDU_3.bt14= MS1ActivePipeCol1byOxi2Way2;
KDU_3.bt11= MS1ActivePipeCol1byFuel1Way1;
KDU_3.bt13= MS1ActivePipeCol1byFuel1Way2;
KDU_3.bt17= MS1ActivePipeCol1byFuel2Way1;
KDU_3.bt15= MS1ActivePipeCol1byFuel2Way2;

KDU_3.bt6= MS1ActivePipeCol2byOxi1Way1;
KDU_3.bt30= MS1ActivePipeCol2byOxi1Way2;
KDU_3.bt2= MS1ActivePipeCol2byOxi2Way1;
KDU_3.bt4= MS1ActivePipeCol2byOxi2Way2;
KDU_3.bt7= MS1ActivePipeCol2byFuel1Way1;
KDU_3.bt31= MS1ActivePipeCol2byFuel1Way2;
KDU_3.bt3= MS1ActivePipeCol2byFuel2Way1;
KDU_3.bt5= MS1ActivePipeCol2byFuel2Way2;

KDU_4.bt29= MS1_ACE_Work;
KDU_4.bt30= MS1_ACE_Cap;

/* ДПО */
KDU_4.bt15= MS1_MOE1;
KDU_4.bt21= MS1_MOE2;
KDU_4.bt16= MS1_MOE3;
KDU_4.bt22= MS1_MOE4;
KDU_4.bt17= MS1_MOE5;
KDU_4.bt23= MS1_MOE6;
KDU_4.bt18= MS1_MOE7;
KDU_4.bt24= MS1_MOE8;
KDU_4.bt19= MS1_MOE9;
KDU_4.bt25= MS1_MOE10;
KDU_4.bt20= MS1_MOE11;
KDU_4.bt26= MS1_MOE12;
KDU_4.bt3= MS1_MOE13;
KDU_4.bt4= MS1_MOE14;
KDU_4.bt5= MS1_MOE15;
KDU_4.bt6= MS1_MOE16;
KDU_4.bt1= MS1_MOE17;
KDU_4.bt2= MS1_MOE18;
KDU_4.bt7= MS1_MOE19;
KDU_4.bt8= MS1_MOE20;
KDU_4.bt9= MS1_MOE21;
KDU_4.bt10= MS1_MOE22;
KDU_4.bt11= MS1_MOE23;
KDU_4.bt12= MS1_MOE24;
KDU_4.bt13= MS1_MOE25;
KDU_4.bt14= MS1_MOE26;
KDU_4.bt27= MS1_MOE27;
KDU_4.bt28= MS1_MOE28;


KDU_1.bt0= MS1_EPSV1;
KDU_1.bt1= MS1_EPSV2;
KDU_1.bt2= MS1_FSV1;
KDU_1.bt3= MS1_FSV2;

KDU_1.bt4= MS1_AV1;
KDU_1.bt5= MS1_AV2;
KDU_1.bt6= MS1_AV3;
KDU_1.bt7= MS1_AV4;
KDU_1.bt8= MS1_AV5;
KDU_1.bt9= MS1_AV6;

KDU_1.bt10= MS1_PV1;
KDU_1.bt11= MS1_PV2;
KDU_1.bt12= MS1_PV3;
KDU_1.bt13= MS1_PV4;

KDU_1.bt14= MS1_EVO1;
KDU_1.bt15= MS1_EVO2;
KDU_1.bt16= MS1_EVO3;
KDU_1.bt17= MS1_EVF1;
KDU_1.bt18= MS1_EVF2;
KDU_1.bt19= MS1_EVF3;

KDU_1.bt20= MS1_S1;
KDU_1.bt21= MS1_S2;
KDU_1.bt22= MS1_SE1;
KDU_1.bt23= MS1_SE2;
KDU_1.bt24= MS1_FV1;
KDU_1.bt25= MS1_FV2;
KDU_1.bt26= MS1_EFV;

KDU_1.bt27= MS1Valve1;
KDU_1.bt28= MS1Valve2;
KDU_1.bt29= MS1Valve3;
KDU_1.bt30= MS1Valve4;
KDU_2.bt0= MS1Valve5;
KDU_2.bt1= MS1Valve6;

/* Редукторы */
KDU_5.bt21= MS1Reductor1;
KDU_5.bt22= MS1Reductor2;

/* Сигнализаторы */
KDU_2.bt2= MS1_RPS1;
KDU_2.bt3= MS1_RPS2;
KDU_2.bt4= MS1_OPS;
KDU_2.bt5= MS1_FPS;


KDU_2.bt6=MS1_SelectSCSection1;
KDU_2.bt7=MS1_SelectSCSection2;
KDU_2.bt8=MS1_UnionSCSections;
KDU_2.bt9=MS1_SelectTankSection1;
KDU_2.bt10=MS1_SelectTankSection2;
KDU_2.bt11=MS1_UnionTankSections;
KDU_2.bt12=MS1_ACE_Off;
KDU_2.bt13=MS1_ACE_On;
KDU_2.bt14=MS1_EPS_Off;
KDU_2.bt15=MS1_RPS_Off;
KDU_2.bt16=MS1_SuperCharging;
KDU_2.bt17=MS1_OffBlockingSC;

Mnemores_51.bt0=MS1VacuumCollectors;

__KDU_7=MS1HelBtl1Pres;
__KDU_8=MS1HelBtl2Pres;
__KDU_15=MS1Oxi1Res;
__KDU_16=MS1Fuel1Res;
__KDU_17=MS1Oxi2Res;
__KDU_18=MS1Fuel2Res;
__KDU_9=MS1Oxi1Pres;
__KDU_10=MS1Fuel1Pres;
__KDU_13=MS1Oxi2Pres;
__KDU_14=MS1Fuel2Pres;
__KDU_11=MS1_FNP;
__KDU_12=MS1_ONP;

MC(__KDU_1, KDU_1);
MC(__KDU_2, KDU_2);
MC(__KDU_3, KDU_3);
MC(__KDU_4, KDU_4);
MC(__KDU_5, KDU_5);
MC(__MNEMO_RES_51,Mnemores_51);

}




