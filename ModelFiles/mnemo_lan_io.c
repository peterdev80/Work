#include "comm.h"
#include "def_mnemo.h"

#ifdef FMS700
#include <assert.h>
#include "Lan.h"
#endif

MNEMO_BUFF mnemo_buff;


 void UpravKDU(void);
 void Uprav_OP_DPO();
 void UpravPitSSWP();
 void UpraOK39();
 void Uprav_PR12();
void lan_out_mnemo_run();
void lan_out_mnemo_freeze() { lan_out_mnemo_run(); };
void lan_out_mnemo_init()
{
	memset(&mnemo_buff, 0, sizeof(mnemo_buff));
	mnemo_buff.Tag = 2500;
};

static double	mM_tIsb;
static double	mM_tInagr;
static double	mM_tISA7II;
static double	mM_tISA7I;
static double	mM_Voltmeter;
static bool mM_PS;

static double tpkjo;
static double tpknr;
static double tga;
static double tDTJ;
static double tDTv2;
static double tDTV1;
static double tDTG;
static double tDTJ2;
static double tDTJ1;


void UpravOK29(void)
{

	UKDU_1.mmvMS_MechConnect = MS_MechConnect;
	UKDU_1.mmvMS_ACE_CapOpen = MS_ACE_CapOpen;
	UKDU_1.mmvMS_DescentMark = MS_DescentMark;
	UKDU_1.mmvMS_SelectMOE = MS_SelectMOE;
	UKDU_1.mmvMS_OrientSystemReady = MS_OrientSystemReady;
	UKDU_1.mmvMS_SelectSection1CEU = MS_SelectSection1CEU;
	UKDU_1.mmvMS_MotionSystemPower = MS_MotionSystemPower;
	UKDU_1.mmvMS_WorkACE = MS_WorkACE;
	UKDU_1.mmvMS_WorkMOE = MS_WorkMOE;
	UKDU_1.mmvMS_WorkMOE1_4 = MS_WorkMOE1_4;
	UKDU_1.mmvMS_WorkMOE15_18 = MS_WorkMOE15_18;
	UKDU_1.mmvMS_LogicOperation3_15 = MS_LogicOperation3_15;
	UKDU_1.mmvMS_LogicOperation5_1 = MS_LogicOperation5_1;
	UKDU_1.mmvMS_LogicOperation5_2 = MS_LogicOperation5_2;
	UKDU_1.mmvMS_LogicOperation5_15 = MS_LogicOperation5_15;
	UKDU_1.mmvMS_LogicOperation5_16 = MS_LogicOperation5_16;


	UKDU_1.mmvMS_Mark66 = MS_Mark66;
	UKDU_1.mmvMS_Mark85 = MS_Mark85;
	UKDU_1.mmvMS_Mark91 = MS_Mark91;
	UKDU_1.mmvMS_Mark92 = MS_Mark92;
	UKDU_1.mmvMS_Mark97 = MS_Mark97;
	UKDU_1.mmvMS_Mark100 = MS_Mark100;
	UKDU_1.mmvMS_Mark107 = MS_Mark107;
	UKDU_1.mmvMS_Mark122 = MS_Mark122;
	UKDU_1.mmvMS_Mark138 = MS_Mark138;
	UKDU_1.mmvMS_Mark141 = MS_Mark141;
	UKDU_1.mnvMS_Mark158 = MS_Mark158;
	
	UKDU_1.mMS2_SE1_Key  = MS2_SE1_Key;
	UKDU_1.mMS2_SE2_Key  = MS2_SE2_Key;
	UKDU_1.mMS2_MOE_Key1 = MS2_MOE_Key1;
	UKDU_1.mMS2_MOE_Key2 = MS2_MOE_Key2;

	UKDU_2.mnvMS2_Mark138_Line = MS2_Mark138_Line;
	UKDU_2.mnvMS2_Mark66_Line = MS2_Mark66_Line;
	UKDU_2.mnvMS2_Mark_66_TimerStop_Line = MS2_Mark_66_TimerStop_Line;
	UKDU_2.mnvMS2_VIC16_AC_Line = MS2_VIC16_AC_Line;
	UKDU_2.mnvMS2_VIC16_DC_Line = MS2_VIC16_DC_Line;
	UKDU_2.mnvMS2_CC29_Line = MS2_CC29_Line;
	UKDU_2.mnvMS2_CC30_Line = MS2_CC30_Line;
	UKDU_2.mnvMS2_CC39_Line = MS2_CC39_Line;
	UKDU_2.mnvMS2_CC2_Line = MS2_CC2_Line;
	UKDU_2.mnvMS2_Mark100_Line = MS2_Mark100_Line;
	UKDU_2.mnvMS2_Mark91_Line1 = MS2_Mark91_Line1;
	UKDU_2.mnvMS2_Mark_91_Line1 = MS2_Mark_91_Line1;
	UKDU_2.mnvMS2_Mark91_Line2 = MS2_Mark91_Line2;
	UKDU_2.mnvMS2_Mark_91_Line2 = MS2_Mark_91_Line2;
	UKDU_2.mnvMS2_Mark91_Line3 = MS2_Mark91_Line3;
	UKDU_2.mnvMS2_Mark_91_Line3 = MS2_Mark_91_Line3;
	UKDU_2.mnvMS2_S1 = MS2_S1;
	UKDU_2.mnvMS2_S2 = MS2_S2;
	UKDU_2.mnvMS2_SE1 = MS2_SE1;
	UKDU_2.mnvMS2_SE2 = MS2_SE2;
	UKDU_2.mnvMS2_Dr1 = MS2_Dr1;
	UKDU_2.mnvMS2_DrE = !MS2_DrE;
	UKDU_2.mnvMS2_FV1 = MS2_FV1;
	UKDU_2.mnvMS2_FEV = MS2_FEV;
	UKDU_2.mnvMS2_V2 = MS2_V2;
	UKDU_2.mnvMS2_V5 = MS2_V5;
	UKDU_2.mnvMS2_V6 = MS2_V6;
	UKDU_2.mnvMS2_FPS = MS2_FPS;
	UKDU_2.mnvMS2_FCS1 = MS2_FCS1;
	UKDU_2.mnvMS2_ONS = MS2_ONS;
	UKDU_2.mnvMS2_FNS = MS2_FNS;
	UKDU_2.mnvMS2_ACE = MS2_ACE;


	UKDU_Rez4.mnvMS2_MC42_Mark66_Line = MS2_MC42_Mark66_Line;
	UKDU_Rez4.mnvMS2_MC42_Mark_92_line = MS2_MC42_Mark_92_line;
	UKDU_Rez4.mnvMS2_CC29_Mark_92_line = MS2_CC29_Mark_92_line;
	UKDU_Rez4.mnvMS2_CC29_MOE_Br_Line = MS2_CC29_MOE_Br_Line;
	UKDU_Rez4.mnvMS2_MC42_MOE_Br_Line = MS2_MC42_MOE_Br_Line;
	UKDU_Rez4.mnvMS2_MOE_Br_1_4 = MS2_MOE_Br_1_4;
	UKDU_Rez4.mnvMS2_MOE_Br_15_18 = MS2_MOE_Br_15_18;
	UKDU_Rez4.mnvMS2_TSS2_Line = MS2_TSS2_Line;
	UKDU_Rez4.mnvMS2_VIC17_Line = MS2_VIC17_Line;
	UKDU_Rez4.mnvMS2_MC_AC_Line = MS2_MC_AC_Line;
	UKDU_Rez4.mnvMS2_MC6_Line = MS2_MC6_Line;
	UKDU_Rez4.mnvMS2_ACE2_Line = MS2_ACE2_Line;
	UKDU_Rez4.mnvMS2_MC44_Line = MS2_MC44_Line;
	UKDU_Rez4.mnvMS2_MC17_Line = MS2_MC17_Line;
	UKDU_Rez4.mnvMS2_MC17_MOE_Br_Line = MS2_MC17_MOE_Br_Line;
	UKDU_Rez4.mnvMS2_DA1_Line = MS2_DA1_Line;
	UKDU_Rez4.mnvMS2_DA2_Line = MS2_DA2_Line;
	UKDU_Rez4.mnvMS2_DA3_Line = MS2_DA3_Line;
	UKDU_Rez4.mnvMS2_PK_L17_Line = MS2_PK_L17_Line;
	UKDU_Rez4.mnvMS2_PK_L18_Line = MS2_PK_L18_Line;
	UKDU_Rez4.mnvMS2_DCS3_Line = MS2_DCS3_Line;
	UKDU_Rez4.mnvMS2_VIC18_Line = MS2_VIC18_Line;
	UKDU_Rez4.mnvMS2_PK_K15_Line = MS2_PK_K15_Line;
	UKDU_Rez4.mnvMS2_MC31_Line = MS2_MC31_Line;
	UKDU_Rez4.mnvMS2_CS6_Line = MS2_CS6_Line;
	UKDU_Rez4.mnvMS2_MC4_Line = MS2_MC4_Line;
	UKDU_Rez4.mnvMS2_VIC13_Line = MS2_VIC13_Line;
	UKDU_Rez4.mnvMS2_ACE2_AC_Line = MS2_ACE2_AC_Line;
	UKDU_Rez4.mnvMS2_MC44_Line2 = MS2_MC44_Line2;
	UKDU_Rez4.mnvMS2_MC32_Line = MS2_MC32_Line;

	UKDU_3.mnvMS2_SChargingSupply = MS2_SChargingSupply;
	UKDU_3.mnvMS2_OxySupply = MS2_OxySupply;
	UKDU_3.mnvMS2_FuelSupply = MS2_FuelSupply;
	UKDU_3.mnvMS2_S1_Pipe = MS2_S1_Pipe;
	UKDU_3.mnvMS2_SE1_SE2_Pipe = MS2_SE1_SE2_Pipe;
	UKDU_3.mnvMS2_Valve2_Pipe = MS2_Valve2_Pipe;
	UKDU_3.mnvMS2_Valve5_Pipe = MS2_Valve5_Pipe;
	UKDU_3.mnvMS2_Valve6_Pipe = MS2_Valve6_Pipe;




	UKDU_Rez6.mnvMS2_CC39_Key1 = MS2_CC39_Key1;
	UKDU_Rez6.mnvMS2_CC39_Key2 = MS2_CC39_Key2;
	UKDU_Rez6.mnvMS2_CC39_Key3 = MS2_CC39_Key3;
	UKDU_Rez6.mnvMS2_CC30_Key1 = MS2_CC30_Key1;
	UKDU_Rez6.mnvMS2_CC30_Key2 = MS2_CC30_Key2;
	UKDU_Rez6.mnvMS2_MC17_ACE_Key = MS2_MC17_ACE_Key;
	UKDU_Rez6.mnvMS2_MC17_MOE_Key = MS2_MC17_MOE_Key;
	UKDU_Rez6.mnvMS2_Mark92_Key = MS2_Mark92_Key;
	UKDU_Rez6.mnvMS2_Mark97_Key = MS2_Mark97_Key;
	UKDU_Rez6.mnvMS2_Mark158_Key = MS2_Mark158_Key;
	UKDU_Rez6.mnvMS2_Mark141_Key = MS2_Mark141_Key;
	UKDU_Rez6.mnvMS2_MDC3_Key = MS2_MDC3_Key;
	UKDU_Rez6.mnvMS2_VIC18_Key = MS2_VIC18_Key;
	UKDU_Rez6.mnvMS2_VIC16_Key = MS2_VIC16_Key;
	UKDU_Rez6.mnvMS2_VIC17_Key = MS2_VIC17_Key;
	UKDU_Rez6.mnvMS2_VIC13_Key = MS2_VIC13_Key;
	UKDU_Rez6.mnvMS2_DZS_Key = MS2_DZS_Key;
	UKDU_Rez6.mnvMS2_ACE2_Key = MS2_ACE2_Key;
	UKDU_Rez6.mnvMS2_WorkACE_Key1 = MS2_WorkACE_Key1;
	UKDU_Rez6.mnvMS2_WorkACE_Key2 = MS2_WorkACE_Key2;
	UKDU_Rez6.mnvMS2_WorkMOE15_18_Key = MS2_WorkMOE15_18_Key;
	UKDU_Rez6.mnvMS2_WorkMOE1_4_Key = MS2_WorkMOE1_4_Key;
	UKDU_Rez6.mnvMS2_02_Sec_Key = MS2_02_Sec_Key;

}

void UpravSEP_MC(void)
{
	mSep1.mM_Ems_L1a = Ems_L1a;
	mSep1.mM_Ems_L2a = Ems_L2a;
	mSep1.mM_Ems_L1b = Ems_L1b;
	mSep1.mM_Ems_P1a = Ems_P1a;
	mSep1.mM_Ems_P1b = Ems_P1b;
	mSep1.mM_Ems_P1c = Ems_P1c;
	mSep1.mM_Ems_RBSB = Ems_RBSB;
	mSep1.mM_Ems_P2a = Ems_P2a;
	mSep1.mM_Ems_E1SB = Ems_E1SB;
	mSep1.mM_Ems_BBSB = Ems_BBSB;
	mSep1.mM_Ems_BBE2 = Ems_BBE2;
	mSep1.mM_Ems_P2b = Ems_P2b;
	mSep1.mM_Ems_E1E = Ems_E1E;
	mSep1.mM_Ems_E1RB = Ems_E1RB;
	mSep1.mM_Ems_E1BB = Ems_E1BB;
	mSep1.mM_Ems_BBRB = Ems_BBRB;
	mSep1.mM_Ems_DOS = Ems_DOS;
	mSep1.mM_Ems_PLUS = Ems_PLUS;
	mSep1.mM_Ems_L1 = Ems_L1;
	mSep1.mM_Ems_P1 = Ems_P1;
	mSep1.mM_Ems_L2 = Ems_L2;
	mSep1.mM_Ems_P2 = Ems_P2;
	mSep1.mM_E6200 = E6200;
	mSep1.mM_E6202 = E6202;
	mSep1.mM_E6204 = E6204;
	mSep1.mM_E6212 = E6212;
	mSep1.mM_E6214 = E6214;
	mSep1.mM_E6314 = E6314;
	mSep1.mM_E6226 = E6226;

	mSep2.mM_Ems_MN28 = Ems_MN28;
	mSep2.mM_E_MN28 = E_MN28;
	mSep2.mM_E_MK34 = E_MK34;
	mSep2.mM_ESR18 = ESR18;
	mSep2.mM_E_MN24 = E_MN24;
	mSep2.mM_ESR13 = ESR13;
	mSep2.mM_ESR15 = ESR15;
	mSep2.mM_E_MN23 = E_MN23;
	mSep2.mM_ESR16 = ESR16;
	mSep2.mM_ESR17 = ESR17;
	mSep2.mM_E6206 = E6206;
	mSep2.mM_Ems_SB28 = Ems_SB28;
	mSep2.mM_Ems_SB45 = Ems_SB45;
	mSep2.mM_Ems_SBON = Ems_SBON;
	mSep2.mM_E_MK34p10s = E_MK34p10s;
	mSep2.mM_E_MN24p5s = E_MN24p5s;
	mSep2.mM_E_MN24p20s = E_MN24p20s;
	mSep2.mM_E_MN23p5s = E_MN23p5s;
	mSep2.mM_E_MN23p20s = E_MN23p20s;
	mSep2.mM_Ems_E6206 = E6206;
	mSep2.mM_Ems_E6264 = E6264;
	mSep2.mM_E_50Ach = E_50Ach;
	mSep2.mM_E6210 = E6210;
	mSep2.mM_Ems_UC = Ems_UC;
	mSep2.mM_Ems_UE = Ems_UE;
	mSep2.mM_E6474 = E6474;


	mSep3.mM_Ems_LP = Ems_LP;
	mSep3.mM_Ems_RB = Ems_RB;
	mSep3.mM_Ems_RBBB = Ems_RBBB;
	mSep3.mM_Ems_BBE1 = Ems_BBE1;
	mSep3.mM_Ems_BBEI = Ems_BBEI;
	/*mSep3.mM_E                           =         E           ;
	mSep3.mM_NgrPO                       =         NgrPO       ;
	mSep3.mM_E_Ce                        =         E_Ce        ;
	mSep3.mM_Ce_C                        =         Ce_C        ;
	mSep3.mM_NgSA                        =         NgSA        ;*/

	mSep5.mM_Ems_EB = Ems_EB;
	mSep5.mM_Ems_ECe = Ems_ECe;
	mSep5.mM_Ems_EP = Ems_EP;
	mSep5.mM_Ems_PO = Ems_PO;
	mSep5.mM_Ems_SA = Ems_SA;
	mSep5.mM_Ems_BSA = Ems_BSA;
	mSep5.mM_Ems_CeC = Ems_CeC;
	mSep5.mM_Ems_BO = Ems_BO;
	mSep5.mM_E_DP1BSAS = E_DP1BSAS;
	mSep5.mM_E_DP2BSAP = E_DP2BSAP;
	mSep5.mM_E_DP3BSAP = E_DP3BSAP;


	mSep6 = EP6402;//Isb
	if (B1273) mSep6 = 0;//KOSTYL!!!!!!!!
	mSep7 = EP6403;//Inagr
	//__SEP_8=EP6402;
	mSep9 = mM_tISA7I;
	mSep10 = EP6401;
}

void UpravSOTR_MC(void)
{
	//region ********************
   //0-disable;1-passiv;2-animate
   //
	SOTR1.msKGOBO = Xm_KGOBO;
	//XSA-BO and klapan
	//line
	SOTR1.msXSABO0 = Xm_XSABO0;
	SOTR1.msXSABO1 = Xm_XSABO1;
	SOTR1.msXSABO2 = Xm_XSABO2;
	SOTR1.msXSABOK0 = Xm_XSABOK0;
	SOTR1.msXSABOK1 = Xm_XSABOK1;
	SOTR1.msXSABOK2 = Xm_XSABOK2;
	SOTR1.msXSABOK3 = Xm_XSABOK3;
	SOTR1.msKGOSA0 = Xm_KGOSA;


	SOTR1.msPKKGOBO = Xm_PKKGOBO;
	//Xsa-sa not klapan
	SOTR1.msXSASA0 = Xm_XSASA0;
	SOTR1.msXSASA1 = Xm_XSASA1;
	SOTR1.msXSASA2 = Xm_XSASA2;
	//
	SOTR3.msPKKGOPO = Xm_PKKGOPO;
	// SOTR3.msPKKGOBO=Xm_PKKGOBO;
	SOTR3.msX6100 = X6100;
	SOTR3.msX6027 = X6027;
	SOTR3.msX6104 = X6104;
	SOTR3.msX6127 = X6127;

	SOTR3.msGR23 = Xm_GR23;
	SOTR3.msGR45 = Xm_GR45;

	SOTR1.msKGOPO = Xm_KGOPO;
	SOTR1.msENA31 = Xm_ENA31;
	SOTR2.msENA32 = Xm_ENA32;
	SOTR2.msKGOSAP1 = Xm_PKKVOSA;
	SOTR2.msKGOSAP2 = Xm_PN88;
	SOTR2.msXSASAK0 = Xm_XSASAK0;
	SOTR2.msXSASAK1 = Xm_XSASAK1;
	SOTR2.msXSASAK2 = Xm_XSASAK2;
	SOTR2.msXSASAK3 = Xm_XSASAK3;

	//endregion
	//0(false) -disable 1-enable
	SOTR1.msSYGN312 = SYGN312;
	SOTR2.msXSR8 = XSR8;
	//KOK
	//0-passiv,1-disable,2-activ

	SOTR2.msKOK1 = Xm_KOK1;
	SOTR2.msKOK2 = Xm_KOK2;
	SOTR2.msKOK3 = Xm_KOK3;
	SOTR2.msKOK4 = Xm_KOK4;
	SOTR2.msKOK5 = Xm_KOK5;




	SOTR4.msKOK6 = Xm_KOK6;
	SOTR4.msKOK7 = Xm_KOK7;
	SOTR4.msKOK8 = Xm_KOK8;
	SOTR4.msKOK9 = Xm_KOK9;



	//1-open; 0-close
	SOTR3.mskok_KL2 = X_kok_KL2;
	SOTR3.mskok_KL3 = X_kok_KL3;
	SOTR3.mskok_KL1 = X_kok_KL1;
	SOTR3.msEK2 = Xm_EK2;
	SOTR3.msEK3 = Xm_EK3;
	SOTR3.msEK1 = Xm_EK1;

	SOTR3.mskok_KL4 = X_kok_KL4;
	// 
	SOTR3.msX6136 = X6136;
	SOTR3.msX6135 = X6135;
	SOTR3.msvbo = X_vbo;
	SOTR3.msvsa = X_vsa;

	//0-passiv,1-activ

	if (Xm_KVO > 1) SOTR3.msKVO = 1; else SOTR3.msKVO = 0; //0 not imposible emulate 3 bit

	SOTR3.msPNKV = Xm_PNKV;

	if (Xm_KVOSA0 > 1)SOTR3.msKVOXSA0 = 1; else SOTR3.msKVOXSA0 = 0;
	if (Xm_KVOSA1 > 1)SOTR3.msKVOXSA1 = 1; else SOTR3.msKVOXSA1 = 0;
	if (Xm_KVOSA2 > 1)SOTR3.msKVOXSA2 = 1; else SOTR3.msKVOXSA2 = 0;

	//0-close, 1-open
	SOTR3.msDV = Xm_DV;
	SOTR3.msZSDVN = ZSDVN;
	SOTR3.msZSDVV = ZSDVV;
	SOTR3.msPNDV = Xm_PNDV;

	SOTR3.msKOKGR = Xm_KOKGR;


	//KNR
	//0-pasiv,1-disable,2-activ
	SOTR2.msENA11 = Xm_ENA11;
	SOTR2.msENA12 = Xm_ENA12;
	SOTR2.msKNR = Xm_KNR;
	SOTR4.msNHR = Xm_NHR;
	SOTR4.msENA21 = Xm_ENA21;
	SOTR4.msENA22 = Xm_ENA22;
	SOTR4.msRRG1 = Xm_RRG1;
	SOTR4.msRRG2 = Xm_RRG2;
	SOTR4.msPKRRG = Xm_PKRRG;
	SOTR4.msRRG4 = Xm_RRG4;
	SOTR4.msRRG5 = Xm_RRG5;
	//0-disable,1-enable
	SOTR3.msvpao1 = X_vpao1;
	SOTR3.msvpao2 = X_vpao2;
	SOTR3.msK_PO = K_PO;



	if (B1273 || Q21)
		SOTR_REZ5.msQ21 = 1; else SOTR_REZ5.msQ21 = 0;
	SOTR_REZ5.msB1273 = B1273;



	//pravka po ENA

	if (Xm_ENA21 < 2)
		SOTR_REZ5.mskENA21 = 0; else SOTR_REZ5.mskENA21 = 1;

	if (Xm_ENA22 < 2)
		SOTR_REZ5.mskENA22 = 0; else SOTR_REZ5.mskENA22 = 1;


	if (Xm_ENA11 < 2) SOTR_REZ5.mskENA11 = 0; else SOTR_REZ5.mskENA11 = 1;

	if (Xm_ENA12 < 2) SOTR_REZ5.mskENA12 = 0; else SOTR_REZ5.mskENA12 = 1;
	if (Xm_ENA31 < 2) SOTR_REZ5.mskENA31 = 0; else SOTR_REZ5.mskENA31 = 1;
	if (Xm_ENA32 < 2) SOTR_REZ5.mskENA32 = 0; else SOTR_REZ5.mskENA32 = 1;
	//SOTR_REZ5.msXM_RRG3     =Xm_RRG3;
	SOTR4.msRRG3 = Xm_RRG3;


	if (Xm_KOK5 > 1) SOTR_REZ5.msHP1 = 1; else SOTR_REZ5.msHP1 = 0;
	if (Xm_KOK1 > 1) SOTR_REZ5.msHP2 = 1; else SOTR_REZ5.msHP2 = 0;
	SOTR_REZ5.msXV01 = X_vpao1;
	SOTR_REZ5.msXV02 = X_vpao2;

	SOTR6 = XP6373;//dtv1
	SOTR7 = XP6374;//dtv2
	SOTR8 = XR7080;//ga
	SOTR9 = XP6400;//DTJ
	SOTR10 = XP6370;//DD2
	SOTR11 = XP6375;//DTG
	SOTR12 = XP6367;//DD1
	SOTR13 = XR7105;//DTJ1
	//__SOTR_14=tDTJ1 ;

}



void lan_out_mnemo_run()
{
	// управление положением виртуальных приборов (модель-> клапаны) 
	UpravOK29();
	UpravSEP_MC();
	UpravSOTR_MC();
	UpravKDU();
	Uprav_OP_DPO();
	UpravPitSSWP();
     UpraOK39();
	 Uprav_PR12(); 
	

#ifndef FMS700
	send_to_lan((struct msg_format_record *)&mnemo_buff,
		CMD_MNEMO,
		tdk3_ws_id[MNEMO_CPU_RT].station_id,
		tdk3_ws_id[MNEMO_CPU_RT].system_id,
		sizeof(mnemo_buff),
		sizeof(mnemo_buff),
		0, 0);
#else
	lan_send_mnemo(&mnemo_buff, sizeof(mnemo_buff));
#endif
}
