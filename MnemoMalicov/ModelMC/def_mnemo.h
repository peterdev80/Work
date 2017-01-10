#ifndef MNEMO_H
#define	MNEMO_H

struct MNEMO_BUFF
{
	int Tag;

	struct
	{
		unsigned mmvMS_MechConnect : 1; //0
		unsigned mmvMS_ACE_CapOpen : 1; //1
		unsigned mmvMS_DescentMark : 1;//2
		unsigned mmvMS_SelectMOE : 1;//3
		unsigned mmvMS_OrientSystemReady : 1;//4
		unsigned mmvMS_SelectSection1CEU : 1;//5
		unsigned mmvMS_MotionSystemPower : 1;//6
		unsigned mmvMS_WorkACE : 1;//7
		unsigned mmvMS_WorkMOE : 1;//8
		unsigned mmvMS_WorkMOE1_4 : 1;//9
		unsigned mmvMS_WorkMOE15_18 : 1;//10
		unsigned mmvMS_LogicOperation3_15 : 1;//11
		unsigned mmvMS_LogicOperation5_1 : 1;//12
		unsigned mmvMS_LogicOperation5_2 : 1;//13
		unsigned mmvMS_LogicOperation5_15 : 1;//14
		unsigned mmvMS_LogicOperation5_16 : 1;//15
		unsigned mmvMS_Mark66 : 1;//16
		unsigned mmvMS_Mark85 : 1;//17
		unsigned mmvMS_Mark91 : 1;//18
		unsigned mmvMS_Mark92 : 1;//19
		unsigned mmvMS_Mark97 : 1;//20
		unsigned mmvMS_Mark100 : 1;//21
		unsigned mmvMS_Mark107 : 1;//22
		unsigned mmvMS_Mark122 : 1;//23
		unsigned mmvMS_Mark138 : 1;//24
		unsigned mmvMS_Mark141 : 1;//25
		unsigned mnvMS_Mark158 : 1;//26
	   //  unsigned mnvd3_5                    :1;//27
	   // unsigned mnvSYGN47                   :1;//28
	   // unsigned mnvSYGN202                  :1;//29
	  //  unsigned mnvtSKD                     :1;//30
	  //   unsigned mnvSYGN239                 :1;//31



	} UKDU_1;


	struct
	{
		unsigned mnvMS2_Mark138_Line : 1; //0
		unsigned mnvMS2_Mark66_Line : 1; //1
		unsigned mnvMS2_Mark_66_TimerStop_Line : 1;//2
		unsigned mnvMS2_VIC16_AC_Line : 1;//3
		unsigned mnvMS2_VIC16_DC_Line : 1;//4
		unsigned mnvMS2_CC29_Line : 1;//5
		unsigned mnvMS2_CC30_Line : 1;//6
		unsigned mnvMS2_CC39_Line : 1;//7
		unsigned mnvMS2_CC2_Line : 1;//8
		unsigned mnvMS2_Mark100_Line : 1;//9
		unsigned mnvMS2_Mark91_Line1 : 1;//10
		unsigned mnvMS2_Mark_91_Line1 : 1;//11
		unsigned mnvMS2_Mark91_Line2 : 1;//12
		unsigned mnvMS2_Mark_91_Line2 : 1;//13
		unsigned mnvMS2_Mark91_Line3 : 1;//14
		unsigned mnvMS2_Mark_91_Line3 : 1;//15
		unsigned mnvMS2_S1 : 1;//16
		unsigned mnvMS2_S2 : 1;//17
		unsigned mnvMS2_SE1 : 1;//18
		unsigned mnvMS2_SE2 : 1;//19
		unsigned mnvMS2_Dr1 : 1;//20
		unsigned mnvMS2_DrE : 1;//21
		unsigned mnvMS2_FV1 : 1;//22
		unsigned mnvMS2_FEV : 1;//23
		unsigned mnvMS2_V2 : 1;//24
		unsigned mnvMS2_V5 : 1;//25
		unsigned mnvMS2_V6 : 1;//26
		unsigned  mnvMS2_FPS : 1;//27
		unsigned  mnvMS2_FCS1 : 1;//28
		unsigned  mnvMS2_ONS : 1;//29
		unsigned   mnvMS2_FNS : 1;//30
		unsigned    mnvMS2_ACE : 1;//31
	}  UKDU_2;

	struct
	{
		unsigned mnvMS2_MC42_Mark66_Line : 1; //0
		unsigned mnvMS2_MC42_Mark_92_line : 1; //1
		unsigned mnvMS2_CC29_Mark_92_line : 1;//2
		unsigned mnvMS2_CC29_MOE_Br_Line : 1;//3
		unsigned mnvMS2_MC42_MOE_Br_Line : 1;//4
		unsigned mnvMS2_MOE_Br_1_4 : 1;//5
		unsigned mnvMS2_MOE_Br_15_18 : 1;//6
		unsigned mnvMS2_TSS2_Line : 1;//7
		unsigned mnvMS2_VIC17_Line : 1;//8
		unsigned mnvMS2_MC_AC_Line : 1;//9
		unsigned mnvMS2_MC6_Line : 1;//10
		unsigned mnvMS2_ACE2_Line : 1;//11
		unsigned mnvMS2_MC44_Line : 1;//12
		unsigned mnvMS2_MC17_Line : 1;//13
		unsigned mnvMS2_MC17_MOE_Br_Line : 1;//14
		unsigned mnvMS2_DA1_Line : 1;//15
		unsigned mnvMS2_DA2_Line : 1;//16
		unsigned mnvMS2_DA3_Line : 1;//17
		unsigned mnvMS2_PK_L17_Line : 1;//18
		unsigned mnvMS2_PK_L18_Line : 1;//19
		unsigned mnvMS2_DCS3_Line : 1;//20
		unsigned mnvMS2_VIC18_Line : 1;//21
		unsigned mnvMS2_PK_K15_Line : 1;//22
		unsigned mnvMS2_MC31_Line : 1;//23
		unsigned mnvMS2_CS6_Line : 1;//24
		unsigned mnvMS2_MC4_Line : 1;//25
		unsigned mnvMS2_VIC13_Line : 1;//26
		unsigned  mnvMS2_ACE2_AC_Line : 1;//27
		unsigned  mnvMS2_MC44_Line2 : 1;//28
		unsigned  mnvMS2_MC32_Line : 1;//29
	  // unsigned   mnv                              :1;//30
	  //unsigned    mnv                              :1;//31
	}  UKDU_Rez4;

	struct
	{
		unsigned mnvMS2_CC39_Key1 : 1; //0
		unsigned mnvMS2_CC39_Key2 : 1; //1
		unsigned mnvMS2_CC39_Key3 : 1;//2
		unsigned mnvMS2_CC30_Key1 : 1;//3
		unsigned mnvMS2_CC30_Key2 : 1;//4
		unsigned mnvMS2_MC17_ACE_Key : 1;//5
		unsigned mnvMS2_MC17_MOE_Key : 1;//6
		unsigned mnvMS2_Mark92_Key : 1;//7
		unsigned mnvMS2_Mark97_Key : 1;//8
		unsigned mnvMS2_Mark158_Key : 1;//9
		unsigned mnvMS2_Mark141_Key : 1;//10
		unsigned mnvMS2_MDC3_Key : 1;//11
		unsigned mnvMS2_VIC18_Key : 1;//12
		unsigned mnvMS2_VIC16_Key : 1;//13
		unsigned mnvMS2_VIC17_Key : 1;//14
		unsigned mnvMS2_VIC13_Key : 1;//15
		unsigned mnvMS2_DZS_Key : 1;//16
		unsigned mnvMS2_ACE2_Key : 1;//17
		unsigned mnvMS2_WorkACE_Key1 : 1;//18
		unsigned mnvMS2_WorkACE_Key2 : 1;//19
		unsigned mnvMS2_WorkMOE15_18_Key : 1;//20
		unsigned mnvMS2_WorkMOE1_4_Key : 1;//21
		unsigned mnvMS2_02_Sec_Key : 1;//22
	   // unsigned mnv                                           :1;//23
	  //  unsigned mnv                                           :1;//24
	 //   unsigned mnv                                           :1;//25
	 //   unsigned mnv                                           :1;//26
	  // unsigned  mnv                                           :1;//27
	 //  unsigned  mnv                                           :1;//28
	 //  unsigned  mnv                                           :1;//29
	 // unsigned   mnv                              :1;//30
	 //unsigned    mnv                              :1;//31
	}  UKDU_Rez6;

	struct
	{
		unsigned mnvMS2_SChargingSupply : 2;//0
		unsigned mnvMS2_OxySupply : 2;//1
		unsigned mnvMS2_FuelSupply : 2;//2
		unsigned mnvMS2_S1_Pipe : 2;//3
		unsigned mnvMS2_SE1_SE2_Pipe : 2;//4
		unsigned mnvMS2_Valve2_Pipe : 2;//5
		unsigned mnvMS2_Valve5_Pipe : 2;//6
		unsigned mnvMS2_Valve6_Pipe : 2;//7
	   // unsigned :2;
	   // unsigned 0:2;
	   // unsigned 1:2;
	   // unsigned 2:2;
	  //  unsigned 3:2;
	   // unsigned 4:2;
	  // unsigned m:2;
	}UKDU_3;


	struct 
	{
		unsigned mM_Ems_L1a : 1;  //0
		unsigned mM_Ems_L2a : 1;    //1 
		unsigned mM_Ems_L1b : 1;    //2
		unsigned mM_Ems_P1a : 1;        //3
		unsigned mM_Ems_P1b : 1;   //4
		unsigned mM_Ems_P1c : 1;   //5
		unsigned mM_Ems_RBSB : 1;   //6
		unsigned mM_Ems_P2a : 1;   //7      
		unsigned mM_Ems_E1SB : 1;    //8
		unsigned mM_Ems_BBSB : 1;   //9
		unsigned mM_Ems_BBE2 : 1;   //10
		unsigned mM_Ems_P2b : 1;  //11
		unsigned mM_Ems_E1E : 1;  //12
		unsigned mM_Ems_E1RB : 1;   //13
		unsigned mM_Ems_E1BB : 1;  //14
		unsigned mM_Ems_BBRB : 1;   //15
		unsigned mM_Ems_DOS : 1;   //16
		unsigned mM_Ems_PLUS : 1;  //17
		unsigned mM_Ems_L1 : 1;  //18
		unsigned mM_Ems_P1 : 1;//19
		unsigned mM_Ems_L2 : 1;//20
		unsigned mM_Ems_P2 : 1;//21
		unsigned mM_E6200 : 1;//22
		unsigned mM_E6202 : 1;//23
		unsigned mM_E6204 : 1;//24
		unsigned mM_E6212 : 1;//25
		unsigned mM_E6214 : 1;//26
		unsigned mM_E6314 : 1;//27
		unsigned mM_E6226 : 1;//28
	  //  unsigned mM_t4:1;//29
	  //  unsigned mM_t5:1;//30
	  //  unsigned mM_t6:1;//31

	} mSep1;

	struct {
		unsigned mM_Ems_MN28 : 1;  //0
		unsigned mM_E_MN28 : 1;    //1 
		unsigned mM_E_MK34 : 1;    //2
		unsigned mM_ESR18 : 1;        //3
		unsigned mM_E_MN24 : 1;   //4
		unsigned mM_ESR13 : 1;   //5
		unsigned mM_ESR15 : 1;   //6
		unsigned mM_E_MN23 : 1;   //7      
		unsigned mM_ESR16 : 1;    //8
		unsigned mM_ESR17 : 1;   //9
		unsigned mM_E6206 : 1;   //10
		unsigned mM_Ems_SB28 : 1;  //11
		unsigned mM_Ems_SB45 : 1;  //12
		unsigned mM_Ems_SBON : 1;   //13
		unsigned mM_E_MK34p10s : 1;  //14
		unsigned mM_E_MN24p5s : 1;   //15
		unsigned mM_E_MN24p20s : 1;   //16
		unsigned mM_E_MN23p5s : 1;  //17
		unsigned mM_E_MN23p20s : 1;  //18
		unsigned mM_Ems_E6206 : 1;//19
		unsigned mM_Ems_E6264 : 1;//20
		unsigned mM_E_50Ach : 1;//21
		unsigned mM_E6210 : 1;//22
		unsigned mM_Ems_UC : 1;//23
		unsigned mM_Ems_UE : 1;//24
		unsigned mM_E6474 : 1;//25
		//unsigned mM_E6214:1;//26
	  //  unsigned mM_E6314:1;//27
	  //  unsigned mM_E6226:1;//28
	}  mSep2;

	struct {
		unsigned mM_Ems_LP : 3;   //0
		unsigned mM_Ems_RB : 3;       //1
		unsigned mM_Ems_RBBB : 3;       //2
		unsigned mM_Ems_BBE1 : 3;         //3
		unsigned mM_Ems_BBEI : 3;         //4
		unsigned mM_E : 3;            //5
		unsigned mM_NgrPO : 3;        //6
		unsigned mM_E_Ce : 3;         //7
		unsigned mM_Ce_C : 3;         //8
		unsigned mM_NgSA : 3;         //9

	} mSep3;

	struct {
		unsigned mM_Ems_EB : 3;  //0
		unsigned mM_Ems_ECe : 3;    //1 
		unsigned mM_Ems_EP : 3;    //2
		unsigned mM_Ems_PO : 3;        //3
		unsigned mM_Ems_SA : 3;   //4
		unsigned mM_Ems_BSA : 3;   //5
		unsigned mM_Ems_CeC : 1;   //6
		unsigned mM_Ems_BO : 1;   //7      
		unsigned mM_E_DP1BSAS : 1;    //8
		unsigned mM_E_DP2BSAP : 1;   //9
		unsigned mM_E_DP3BSAP : 1;   //10


	} mSep5;

	float mSep6;
	float mSep7;
	float mSep8;
	float mSep9;
	float mSep10;

	struct
	{
		unsigned msKGOBO : 2;  //0
		unsigned msXSABO0 : 2; //1
		unsigned msXSABO1 : 2; //2
		unsigned msXSABO2 : 2; //3
		unsigned msXSABOK0 : 2; //4
		unsigned msXSABOK1 : 2; //5
		unsigned msXSABOK2 : 2; //6
		unsigned msXSABOK3 : 2; //7
		unsigned msKGOSA0 : 2; //8
		unsigned msPKKGOBO : 2; //9
		unsigned msXSASA0 : 2; //10
		unsigned msXSASA1 : 2; //11
		unsigned msXSASA2 : 2;  //12
		unsigned msKGOPO : 2;    //13 
		unsigned  msENA31 : 2;    //14
		unsigned msSYGN312 : 1; //15
	}SOTR1;
	struct
	{
		unsigned msENA32 : 2;  //0
		unsigned msKGOSAP1 : 2; //1
		unsigned msKGOSAP2 : 2; //2
		unsigned msXSASAK0 : 2; //3
		unsigned msXSASAK1 : 2; //4
		unsigned msXSASAK2 : 2; //5
		unsigned msXSASAK3 : 2; //6
		unsigned msKOK1 : 2; //7
		unsigned msKOK2 : 2; //8
		unsigned msKOK3 : 2; //9
		unsigned msKOK4 : 2; //10
		unsigned msKOK5 : 2; //11
		unsigned msENA11 : 2;  //12
		unsigned msENA12 : 2;    //13 
		unsigned msKNR : 2;    //14
		unsigned msXSR8 : 1; //15

	}SOTR2;

	struct
	{
		unsigned  mskok_KL2 : 1;//0
		unsigned  mskok_KL3 : 1; //1
		unsigned  mskok_KL1 : 1; //2
		unsigned  msEK2 : 1; //3
		unsigned  msEK3 : 1;//4
		unsigned  msEK1 : 1;//5
		unsigned  msX6136 : 1;//6
		unsigned  msX6135 : 1;//7
		unsigned  msvbo : 1;//8
		unsigned  msvsa : 1;//9
		unsigned  msKVO : 1;//10
		unsigned  msPNKV : 1;//11
		unsigned  msKVOXSA0 : 1;//12
		unsigned  msKVOXSA1 : 1;//13
		unsigned  msKVOXSA2 : 1;//14
		unsigned  msDV : 1;//15
		unsigned  msZSDVN : 1; //16
		unsigned  msZSDVV : 1; //17
		unsigned  msPNDV : 1; //18
		unsigned  msvpao1 : 1; //19
		unsigned  msvpao2 : 1; //20
		unsigned  msK_PO : 1; //21
		unsigned msKOKGR : 1;//22
		unsigned mskok_KL4 : 1;//23
		unsigned msGR23 : 1; //24
		unsigned msPKKGOPO : 1;//25
		unsigned msGR45 : 1;//26
		unsigned msX6100 : 1;//27
		unsigned msX6027 : 1;//28
		unsigned msX6104 : 1;//29
		unsigned msX6127 : 1;//30
	}SOTR3;
	struct
	{
		unsigned msNHR : 2;  //0
		unsigned msENA21 : 2; //1
		unsigned msENA22 : 2; //2
		unsigned msRRG1 : 2; //3
		unsigned msRRG2 : 2; //4
		unsigned msPKRRG : 2; //5
		unsigned msRRG4 : 2; //6
		unsigned msRRG5 : 2; //7
		unsigned msKOK6 : 2; //8
		unsigned msKOK7 : 2; //9
		unsigned msKOK8 : 2; //10
		unsigned msKOK9 : 2; //11
		unsigned msRRG3 : 2;  //12
	  //  unsigned ms:2;    //13 
	  //  unsigned ms:2;    //14
	 // unsigned ms:1; //15
	}SOTR4;

	struct
	{
		unsigned msQ21 : 1;//0
		unsigned msB1273 : 1; //1
		unsigned mskENA21 : 1; //2
		unsigned mskENA22 : 1; //3
		unsigned mskENA11 : 1;//4
		unsigned mskENA12 : 1;//5
		unsigned mskENA31 : 1;//6
		unsigned mskENA32 : 1;//7
		unsigned msXM_RRG3 : 1;//8
		unsigned msHP1 : 1;//9
		unsigned msHP2 : 1;//10
		unsigned msXV01 : 1;//11
		unsigned msXV02 : 1;//12
		//unsigned ms          :1;//13
		//unsigned ms          :1;//14
		//unsigned ms      :1;//15
		//unsigned ms         :1; //16
		//unsigned ms        :1; //17
		//unsigned ms       :1; //18
		//unsigned ms        :1; //19
		//unsigned ms        :1; //20
		//unsigned ms      :1; //21
		//unsigned ms       :1;//22
		//unsigned ms        :1;//23
		//unsigned ms        :1; //24
		//unsigned ms          :1;//25
		//unsigned ms       :1;//26
		//unsigned ms         :1;//27
		//unsigned ms         :1;//28
		//unsigned ms         :1;//29
		//unsigned ms         :1;//30
	}SOTR_REZ5;

	struct
	{
		unsigned tJEN : 2;
		unsigned tRkjo : 2;
		unsigned OVK3 : 2;
		unsigned tKNR : 2;
		unsigned tKJO : 2;
	} SOTR5;

	float SOTR6;
	float SOTR7;
	float SOTR8;
	float SOTR9;
	float SOTR10;
	float SOTR11;
	float SOTR12;
	float SOTR13;
	// Function Shema KDU
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
	   
	  float KDU_7;
	  float KDU_8;
	   float KDU_15;
	  float KDU_16;
	  float KDU_17;
	   float KDU_18;
	  float KDU_9;
	  float KDU_10;
	  float KDU_13;
	  float KDU_14;
	  float KDU_11;
	  float KDU_12;
	  
	  
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
       } KDU_MS1

} mnemo_buff;

#define UKDU_1 mnemo_buff.UKDU_1
#define UKDU_2 mnemo_buff.UKDU_2
#define UKDU_3 mnemo_buff.UKDU_3
#define UKDU_Rez4 mnemo_buff.UKDU_Rez4
#define UKDU_Rez6 mnemo_buff.UKDU_Rez6

#define mSep1 mnemo_buff.mSep1
#define mSep2 mnemo_buff.mSep2
#define mSep3 mnemo_buff.mSep3
#define mSep4 mnemo_buff.mSep4
#define mSep5 mnemo_buff.mSep5
#define mSep6 mnemo_buff.mSep6
#define mSep7 mnemo_buff.mSep7
#define mSep8 mnemo_buff.mSep8
#define mSep9 mnemo_buff.mSep9
#define mSep10 mnemo_buff.mSep10

#define SOTR1 mnemo_buff.SOTR1
#define SOTR2 mnemo_buff.SOTR2
#define SOTR3 mnemo_buff.SOTR3
#define SOTR4 mnemo_buff.SOTR4
#define SOTR5 mnemo_buff.SOTR5
#define SOTR6 mnemo_buff.SOTR6
#define SOTR7 mnemo_buff.SOTR7
#define SOTR8 mnemo_buff.SOTR8
#define SOTR9 mnemo_buff.SOTR9
#define SOTR10 mnemo_buff.SOTR10
#define SOTR11 mnemo_buff.SOTR11
#define SOTR12 mnemo_buff.SOTR12
#define SOTR13 mnemo_buff.SOTR13
#define SOTR_REZ5 mnemo_buff.SOTR_REZ5


#define KDU_1 mnemo_buff.KDU_1;
#define KDU_2 mnemo_buff.KDU_2;
#definr KDU_3 mnemo_buff.KDU_3;
#define KDU_4 mnemo_buff.KDU_4;
#define KDU_5 mnemo_buff.KDU_5;
#define KDU_6 mnemo_buff.KDU_6;
#define KDU_7 mnemo_buff.KDU_7;
#define KDU_8 mnemo_buff.KDU_8;
#define KDU_9 mnemo_buff.KDU_9;
#define KDU_10 mnemo_buff.KDU_10;
#define KDU_11 mnemo_buff.KDU_11;
#define KDU_12 mnemo_buff.KDU_12;
#define KDU_13 mnemo_buff.KDU_13;
#define KDU_14 mnemo_buff.KDU_14;
#define KDU_15 mnemo_buff.KDU_15;
#define KDU_16 mnemo_buff.KDU_16;
#define KDU_17 mnemo_buff.KDU_17;
#define KDU_18 mnemo_buff.KDU_18;
#define KDU_MS1 mnemo_buff.KDU_MS1;

def

#endif 
