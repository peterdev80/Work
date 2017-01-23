#ifndef KLAPANY_H
#define	KLAPANY_H

//......... данные из модели в РС КЛАПАНЫ ......................

struct Klapan1_struct {
         unsigned ksd_close: 1;
         unsigned ksd_open: 1;
         unsigned ksd_eu: 1;
         unsigned psa_close: 1;
         unsigned psa_litle: 1;
         unsigned psa_open: 1;
         unsigned rpvA_0: 1;
         unsigned rpvA_1: 1;
         unsigned rpvB_0: 1;
         unsigned rpvB_1: 1;
         unsigned epk_p_open: 1;
         unsigned epk_p_close: 1;
         unsigned epk_rd_open:1;
         unsigned epk_rd_close:1;
         unsigned epk_rd_produvka: 1;
         unsigned bo_sa:1;
         unsigned bo_su:1;
         unsigned ob_su :1;
         unsigned kvd1_1 :1;
         unsigned kvd1_3 :1;
         unsigned kvd2_1 :1;
         unsigned kvd2_2 :1;
         unsigned kvd2_3 :1;
         unsigned kvd_sa_bo: 1;
         unsigned brub1: 1;
         unsigned brub2: 1;
         unsigned brub5: 1;
         unsigned brub6: 1;
         unsigned brub_left: 1;
         unsigned brub_richt: 1;
         unsigned Stopor_SA:1;
         };    			 

struct Klapan2_struct{
         unsigned brus1: 1;
         unsigned brus2: 1;
         unsigned brus3: 1;
         unsigned brus4: 1;
         unsigned brus5: 1;
         unsigned brus6: 1;
         unsigned brus7: 1;
         unsigned brus8: 1;
         unsigned brus_rrst:1;
         unsigned brus_1m: 1;
         unsigned brus_pbk: 1;
         unsigned brus_vp1: 1;
         unsigned brus_vp2: 1;
         unsigned brus_sro: 1;
         unsigned pzvs1: 1;
         unsigned pzvs2: 1;
         unsigned pzvs3: 1;
	 unsigned bo_kon: 1;
         unsigned k_kvd:1;
         unsigned k_ksd:1;
         unsigned l_ksd:1;
         unsigned rrj_7_12:1;
         unsigned rrj_ot17:1;
         unsigned bdus_1_2:1;
         unsigned bdus_ot3:1;
         //вставить дсд;
         };   			 

struct Klapan3_struct{
          unsigned zdv1:1;
          unsigned zdv2:1;
          unsigned hsa1_0:1;
          unsigned hsa1_1:1;
          unsigned hsa2_0:1;
          unsigned hsa2_1:1;
          unsigned RAP_7:1;
          unsigned BR1_1:1;
          unsigned BR1_2:1;
          unsigned BR1_3:1;
          unsigned RAP_10_1:1;
          unsigned RAP_10_2:1;
          unsigned RAP_10_3:1;
          unsigned BAPD_1:1;
          unsigned BAPD_2:1;
          unsigned BAPD_3:1;


        };     	

//-------- данные из РС КЛАПАНЫ в модель ------------------

struct Klapan1_to_model_struct{
         unsigned ksd_close: 1;
         unsigned ksd_open: 1;
         unsigned ksd_eu: 1;
         unsigned psa_close: 1;
         unsigned psa_litle: 1;
         unsigned psa_open: 1;
         unsigned rpv1_1: 1;
         unsigned rpv1_2: 1;
         unsigned rpv1_3: 1;
         unsigned rpv2_1: 1;
         unsigned rpv2_2: 1;
         unsigned rpv2_3: 1;
         unsigned epk_p_open: 1;
         unsigned epk_p_close: 1;
         unsigned epk_rd_open:1;
         unsigned epk_rd_close:1;
         unsigned bo_sa_open:1;
         unsigned bo_sa_close:1;
         unsigned bo_su_open:1;
         unsigned bo_su_close:1;
         unsigned kvd1_1 :1;
         //unsigned kvd1_2 :1;
         unsigned kvd1_3 :1;
         unsigned kvd2_1 :1;
         unsigned kvd2_2 :1;
         unsigned kvd2_3 :1;
         unsigned brub_left_1: 1;
         unsigned brub_left_2: 1;
         unsigned brub_richt_1: 1;
         unsigned brub_richt_2: 1;
         unsigned bo_kond_bo : 1;
         unsigned bo_kond_sa : 1;
         };   		 

struct Klapan2_to_model_struct{
         unsigned brus1_1: 1;
         unsigned brus1_2: 1;
         unsigned brus2_1: 1;
         unsigned brus2_2: 1;
         unsigned brus3_1: 1;
         unsigned brus3_2: 1;
         unsigned brus4_1: 1;
         unsigned brus4_2: 1;
         unsigned brus5_1: 1;
         unsigned brus5_2: 1;
         unsigned brus6_1: 1;
         unsigned brus6_2: 1;
         unsigned brus7_1: 1;
         unsigned brus7_2: 1;
         unsigned brus8_1: 1;
         unsigned brus8_2: 1;
         unsigned brus_rrst_1:1;
         unsigned brus_rrst_2:1;
         unsigned brus_1m_1: 1;
         unsigned brus_1m_2: 1;
         unsigned brus_pbk_1: 1;
         unsigned brus_pbk_2: 1;
         unsigned brus_vp1_1: 1;
         unsigned brus_vp1_2: 1;
         unsigned brus_vp2_1: 1;
         unsigned brus_vp2_2: 1;
         unsigned brus_sro_1: 1;
         unsigned brus_sro_2: 1;
         unsigned brubL_1:1;
         unsigned brubR_1:1;
         unsigned brubL_2:1;
         unsigned brubR_2:1;

         };   		 

struct Klapan3_to_model_struct{
         unsigned epk_rd_produvka_open: 1;
         unsigned epk_rd_produvka_close: 1;
         unsigned kvd_sa_bo_1: 1;
         unsigned kvd_sa_bo_2: 1;
         unsigned k_kvd_1:1;
         unsigned k_kvd_2:1;
         unsigned k_ksd_1:1;
         unsigned k_ksd_2:1;
         unsigned l_ksd_1:1;
         unsigned l_ksd_2:1;
         unsigned ob_su_1:1;
         unsigned ob_su_2:1;
         unsigned pzvs1_1: 1;
         unsigned pzvs1_2: 1;
         unsigned pzvs2_1: 1;
         unsigned pzvs2_2: 1;
         unsigned pzvs3_1: 1;
         unsigned pzvs3_2: 1;
         unsigned brub1_1: 1;
         unsigned brub1_2: 1;
         unsigned brub2_1: 1;
         unsigned brub2_2: 1;
         unsigned brub5_1: 1;
         unsigned brub5_2: 1;
         unsigned brub6_1: 1;
         unsigned brub6_2: 1;
         unsigned rrj_7:1;
         unsigned rrj_12:1;
         unsigned rrj_17 :1;
         unsigned bdus_1_1:1;
         unsigned bdus_1_2:1;
         unsigned bdus_1_3:1;
         };    		 
 
struct Klapan4_to_model_struct{
         unsigned zdv1_o:1;
         unsigned zdv1_c:1;
         unsigned zdv2_o:1;
         unsigned zdv2_c:1;
         unsigned hsa_sa1:1;
         unsigned hsa_sa2:1;
         unsigned hsa_sa3:1;
         unsigned hsa_bo1:1;
         unsigned hsa_bo2:1;
         unsigned hsa_bo3:1;
          unsigned RAP_7_1:1;
         unsigned RAP_7_2:1;
          unsigned BR1_1:1;
          unsigned BR1_2:1;
          unsigned BR1_3:1;
          unsigned RAP_10_1:1;
          unsigned RAP_10_2:1;
          unsigned RAP_10_3:1;
          unsigned BAPD_1:1;
          unsigned BAPD_2:1;
          unsigned BAPD_3:1;
          unsigned Stopor_SA_1:1;
          unsigned Stopor_SA_2:1;
	 
        };       		 

#endif


struct KLAP_BUFF
{
	int Tag;

	Klapan1_struct Klapan1;
	Klapan2_struct Klapan2;
	Klapan3_struct Klapan3;

	int __SET_DSD,
	    __P_MANUVAK,
	    __SET_U_VOLTM;
};

struct KLAP_IN_BUFF
{
	int Tag;

	Klapan1_to_model_struct Klapan1_to_model;
	Klapan2_to_model_struct Klapan2_to_model;
	Klapan3_to_model_struct Klapan3_to_model;
	Klapan4_to_model_struct Klapan4_to_model;

	int __DSD, __BUTTON_RUS, __KONTROL_IP;
};

KLAP_BUFF kl_buf_out;
KLAP_IN_BUFF kl_buf_in;

#define Klapan1 kl_buf_out.Klapan1
#define Klapan2 kl_buf_out.Klapan2
#define Klapan3 kl_buf_out.Klapan3

#define __SET_DSD kl_buf_out.__SET_DSD
#define __P_MANUVAK kl_buf_out.__P_MANUVAK
#define __SET_U_VOLTM kl_buf_out.__SET_U_VOLTM

#define Klapan1_to_model kl_buf_in.Klapan1_to_model
#define Klapan2_to_model kl_buf_in.Klapan2_to_model
#define Klapan3_to_model kl_buf_in.Klapan3_to_model
#define Klapan4_to_model kl_buf_in.Klapan4_to_model

#define __DSD kl_buf_in.__DSD
#define __BUTTON_RUS kl_buf_in.__BUTTON_RUS
#define __KONTROL_IP kl_buf_in.__KONTROL_IP
