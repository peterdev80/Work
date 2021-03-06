#ifndef MNEMO_H
#define	MNEMO_H

typedef struct MNEMO_BUFF_
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
	     unsigned mMS2_SE1_Key   :1;//27
	     unsigned mMS2_SE2_Key   :1;//28
	    unsigned mMS2_MOE_Key1                  :1;//29
	    unsigned mMS2_MOE_Key2                  :1;//30
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
       }KDU_1;
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
       }KDU_2;
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
       }KDU_3;
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
       }KDU_4;
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
       }KDU_5;
	   
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
       } KDU_MS1;
	
	struct {
        unsigned H_1PODVOD:1;
        unsigned H_2PODVOD:1;
        unsigned H_3PODVOD:1;
        unsigned H_OSM :1;
        unsigned H_AC1 :1;
        unsigned H_AC3 :1;
        unsigned H_PK_D5 :1;
        unsigned H_PK_D8 :1;
        unsigned H_12_6 :1;
        unsigned H_AC10 :1;
        unsigned H_ROSM :1;
        unsigned H_1ROSM :1;
        unsigned H_2ROSM :1;
        unsigned H_3ROSM :1;
        unsigned H_4ROSM :1;
        unsigned H_1OSM :1;
        unsigned H_12_2 :1;
        unsigned H_12_2a :1;
        unsigned H_12_2b :1;
        unsigned H_12_2c:1;
        unsigned H_12_2d :1;
        unsigned H_12_2e :1;
        unsigned H_12_2f :1;
        unsigned H_12_2g :1;
        unsigned H_R2 :1;
        unsigned H_AC5 :1;
        unsigned H_PK_G5 :1;
        unsigned H_PK_G6 :1;
        unsigned H_12_6c :1;
        unsigned H_12_6d :1;
        unsigned H_12_6e :1;
      
       } OP_DPO1;
	    struct {
        unsigned H_12_6a :1;
        unsigned H_12_6b :1;
        unsigned H_12_3 :1;
        unsigned H_12_3a :1;
        unsigned H_1OTVOD :1;
        unsigned H2_OTVOD :1;
        unsigned H3_OTVOD :1;
        unsigned H_ROTVOD :1;
        unsigned Y324 :1;       
        unsigned H_OK39 :1;
        unsigned H_12_4 :1;
        unsigned H_12_4a :1;
        unsigned H_12_1 :1;
        unsigned H_R1 :1;
        unsigned H_OTVOD :1;
        unsigned H772 :1;
        unsigned C7701 :1;
        unsigned C7702 :1;
        unsigned Q51 :1;
        unsigned SYGN52 :1;
        unsigned SYGN45 :1;
        unsigned SYGN212 :1;
        unsigned SYGN49 :1;
        unsigned SYGN188 :1;
        unsigned SYGN189 :1;
        unsigned A79 :1;
        unsigned TS_26 :1;
        unsigned SYGN221 :1;
        unsigned A80 :1;
        unsigned A47 :1;
       } OP_DPO2;
	    struct {
        unsigned H_pt10:1;
        unsigned H_PK_V5:1;
        unsigned H_12_4d:1;
        unsigned H_1V5:1;
        unsigned H_pt37:1;
        unsigned H1040:1;
        unsigned H764:1;
        unsigned H766:1;
        unsigned H_AC2:1;
        unsigned H_AC3:1;
        unsigned H_AC1:1;
        unsigned H748:1;
        unsigned H774:1;
        unsigned H766_zero:1;
        unsigned H742:1;
        unsigned H753:1;
        unsigned H_PK_D13:1;
        unsigned H754:1;
        unsigned H_PZ_0p:1;
        unsigned H_PZ_dl:1;
        unsigned H745:1;
        unsigned HR6657 :1;
        unsigned H_5G17:1;
        unsigned H_PK_G17:1;
        unsigned H_1D8:1;
        unsigned H_1D7:1;
        unsigned bt26:1;
        unsigned bt27:1;
        unsigned bt28:1;
        unsigned bt29:1;
        unsigned bt30:1;
        unsigned bt31:1;
       } PitSSWP_1;
struct {
        unsigned H_PK_D9:1;
        unsigned H_PK_D11:1;
        unsigned bt2_zero:1;
        unsigned H743:1;
        unsigned H747:1;
        unsigned H750:1;
        unsigned H_12_5:1;
        unsigned H_1D9:1;
        unsigned bt8_zero:1;
        unsigned H744:1;
        unsigned H757:1;
        unsigned H760:1;
        unsigned H_PK_D17:1;
        unsigned H_PK_D15:1;
        unsigned H_1D15:1;
        unsigned H_6D17:1;
        unsigned H_PGS_C1:1;
        unsigned H_PGS_0p:1;
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
       } PitSSWP_2;
	   
struct 
{
   unsigned MS_Selection1CEU  :1;   //0 
   unsigned MS_Selection2CEU  :1;   //1 
   unsigned MS_Section1SC     :1;   //2 
   unsigned MS_Section2SC     :1;   //3 
   unsigned MS_SuperCharging  :1;   //4 
   unsigned MS_OffBlockingSC  :1;   //5 
   unsigned MS_UnionCollectors :1;  //6 
   unsigned MS_Mark94p_m      :1;   //7     
   unsigned MS_Mark106m :1;         //8 
   unsigned MS_Mark93m :1;          //9 
   unsigned MS_Mark98m :1;          //10
   unsigned MS_Mark99p :1;          //11
   unsigned MS_Mark19p :1;          //12
   unsigned MS_Mark39p :1;          //13
   unsigned  MS_Mark40p :1;         //14
   unsigned MS_Mark148p :1;         //15
   unsigned MS_Mark101p :1;         //16
   unsigned MS_Mark155p :1;         //17
   unsigned MS_Mark156p :1;         //18
   unsigned MS_Mark147m :1;         //19
   unsigned MS_Mark158p_m :1;       //20
   unsigned MS_Mark66p_m :1;        //21
   unsigned MS_Mark141p :1;         //22
   unsigned MS_Mark91p_m :1;        //23
   unsigned MS_Mark122p     :1;     //24
   unsigned MS_LogicOperation8_33 :1; //25;
   unsigned MS_CC1 :1;              //26
   unsigned MS_CC2 :1;              //27
   unsigned  MS_CC32 1;             //28
   unsigned         MS_CC33 :1;     //29
   unsigned         MS_CC29 :1;     //30
} OK39_ND_1;
struct {
        unsigned MS_CC39 :1;
        unsigned MS_CC48 :1;
        unsigned MS_CC49 :1;
        unsigned MS_CC62 :1;
        unsigned MS_KR_UA1 :1;
        unsigned MS_MC27 :1;
        unsigned MS_MC70 :1;
        unsigned MS_ACE1 :1;
        unsigned MS_MC30 :1;
        unsigned MS_MC42 :1;
        unsigned MS_KR_UA6 :1;
        unsigned MS_KR_UA9 :1;
        unsigned MS_KR_SH14:1;
        unsigned MS_PK_I13 :1;
        unsigned MS_PK_I6 :1;
        unsigned MS_MC3 :1;
        unsigned MS_SU5 :1;
        unsigned MS_MC4 :1;
        unsigned MS_KZ :1;
        unsigned MS_SEP2 :1;
        unsigned MS_PK_I5 :1;
        unsigned MS_MC73 :1;
        unsigned MS_PK_L17 :1;
        unsigned MS_VIC18 :1;
        unsigned MS_RUS3 :1;
        unsigned MS_PK_K15 :1;
        unsigned MS_MC1 :1;
        unsigned MS_MC26 :1;
        unsigned MS_PK_D17 :1;
        unsigned MS_PK_G17 :1;
        unsigned MS_KR_YU5 :1;
        
       } OK39_ND_2;
	   
	   
	   
	   
	   
	   struct {
        unsigned MS_KR_YU6:1;
        unsigned MS_PK_D5 :1;
        unsigned MS3_EVOF1:1;
        unsigned MS3_EVOF2:1;
        unsigned MS3_EVOF3:1;
        unsigned MS3_Col1 :1;
        unsigned MS3_Col2:1;
        unsigned MS3_VIC1_Key :1;
        unsigned MS3_VIC2_Key :1;
        unsigned MS3_EVOF1_Key1 :1;
        unsigned MS3_EVOF1_Key2 :1;
        unsigned MS3_EVOF2_Key1 :1;
        unsigned MS3_EVOF2_Key2 :1;
        unsigned MS3_EVOF_Key1 :1;
        unsigned MS3_EVOF_Key2 :1;
        unsigned MS3_Efir_Pwr_Key:1;       
        unsigned MS3_CC39_Key1 :1;
        unsigned MS3_CC39_Key2 :1;
        unsigned MS3_CC39_Key3 :1;
        unsigned MS3_MC43_Line :1;
        unsigned MS3_PK_G15_Line :1;
        unsigned MS3_Mark101_Line :1;
        unsigned MS3_PK_G7_Line :1;
        unsigned MS3_PK_G8_Line :1;
        unsigned MS3_KR_E6_Line :1;
        unsigned MS3_KR_E7_Line :1;
        unsigned MS3_SU2_Line :1;
        unsigned MS3_PK_V3_Line :1;
        unsigned MS3_PK_V4_Line :1;
        unsigned MS3_MC27_Line :1;
        unsigned MS3_ACE1_Line :1;
       }  OK39_ND_3;
	   
	   
	   
	   
	   
	   struct {
        unsigned MS3_PK_A4_Line :1;
        unsigned MS3_Mark91_Line :1;
        unsigned MS3_Mark_91_Line :1;
        unsigned MS3_MC42_Line :1;
        unsigned MS3_MC29_Line :1;
        unsigned MS3_PK_A3_Line :1;
        unsigned MS3_MC69_Line; :1;
        unsigned MS3_Mark94_Line :1;
        unsigned MS3_Mark_94_Line :1;
        unsigned MS3_PK_V1_Line :1;
        unsigned MS3_PK_V2_Line :1;
        unsigned MS3_SU1_Line :1;
        unsigned MS3_KR_UA6_Line :1;
        unsigned MS3_KR_UA9_Line :1;
        unsigned MS3_VIC2_Line :1;
        unsigned MS3_PK_I13_Line :1;
        unsigned MS3_VIC1_Line :1;
        unsigned MS3_PK_I6_Line :1;
        unsigned MS3_MC3_Line :1;
        unsigned MS3_SU5_Line :1;
        unsigned MS3_MC4_Line3 :1;
        unsigned MS3_KZ_Line3 :1;
        unsigned MS3_SEP2_Line :1;
        unsigned  MS3_PK_I5_Line :1;
        unsigned MS3_MC73_Line :1;
        unsigned MS3_RUS3_Line :1;
        unsigned MS3_PK_K15_Line :1;
        unsigned MS3_PK_DG17_Line1 :1;
        unsigned MS3_PK_DG17_Line2 :1;
        unsigned MS3_KR_YU5_6_Line :1;
        unsigned MS3_PK_D5_Line :1;
       // unsigned :1;
       }  OK39_ND_4;
	   
	   
	   
	   
	   struct {
        unsigned MS3_OpenValve1_Line :1;                      //   0 
        unsigned MS3_OpenV  alve2_Line :1;                    //   1 
        unsigned MS3_CloseValves_Line :1;                     //   2 
        unsigned MS3_CC39_Line :1;                            //   3 
        unsigned MS3_CC48_Line :1;                            //   4 
        unsigned MS3_CC49not122 :1;                           //   5 
        unsigned  MS3_Mark122_Line1 :1;                       //   6 
        unsigned MS3_MC4_Line1 :1;                            //   7 
        unsigned MS3_MC4_Line2 :1;                            //   8 
        unsigned MS3_KZ_Line1 :1;                             //   9 
        unsigned MS3_KZ_Line2            :1;                  //   10
        unsigned  MS3_CC2_Line :1;                            //   11
        unsigned MS3_EPSV1:1;                                 //   12
        unsigned MS3_EPSV2:1;                                 //   13
        unsigned MS3_PV1:1;                                   //   14
        unsigned MS3_PV2:1;                                   //   15
        unsigned MS_Close_value_2:1;                          //   16
        unsigned MS3_SH14_Key:1;                              //   17
        unsigned MS3_SKD1_Key:1;                              //   18
        unsigned MS3_OVK1_Key:1;                              //   19
        unsigned MS3_EVOF1_Key2_Line:1;                       //   20
        unsigned MS3_EVOF2_Key2_Line:1;                       //   21
        unsigned MS3_EVOF_Key2_Line:1;                        //   22
        unsigned  MS3_SKD1_Key_Line:1;                        //   23
        unsigned MS3_OVK1_Key_Line:1;                         //   24
        unsigned MS3_SH14_Key_Line:1;                         //   25
      /*  unsigned :1;                                        //   26
        unsigned :1;                                          //   27
        unsigned :1;                                          //   28
        unsigned :1;                                          //   29
        unsigned :1;                                          //   30
        unsigned :1;*/                                        //   31
       }  OK39_ND_5;
 struct {
       
       unsigned  MS3_EVOF1_Pipe:2;
        unsigned MS3_EVOF2_Pipe:2;
        unsigned MS3_EPSV1_Pipe:2;
        unsigned MS3_EPSV2_Pipe:2;
        unsigned MS3_Ballon1_Pipe:2;
        unsigned MS3_Ballon2_Pipe:2;
        unsigned MS3_Col1_new:2;
        unsigned M3_col2_new:2;
        /*unsigned :2;
        unsigned :2;
        unsigned :2;
        unsigned :2;
        unsigned :2;
        unsigned :2;
        unsigned :2;*/
       }  OK39_ND_6;
	struct {
       
        unsigned msH1060:1;
        unsigned msQ33:1;
        unsigned msK1763:1;
	} PR12_MC_F;
	
	struct {
		unsigned ms_H_PK_D9   :1; 
        unsigned ms_H_PK_D11  :1; 
        unsigned ms_H_PK_D15  :1; 
        unsigned ms_H_PK_D17  :1; 
        unsigned ms_H_PK_D13  :1; 
        unsigned ms_H_PK_G17  :1; 
        unsigned ms_H_AC1     :1; 
        unsigned ms_H_AC2     :1; 
        unsigned ms_H_AC4     :1; 
        unsigned ms_H_AC3     :1; 
        unsigned ms_H_AC5     :1; 
        unsigned ms_H_OSM     :1; 
        unsigned ms_H_R_OSM_19   :1; 
        unsigned ms_H_R_OSM_148  :1; 
        unsigned ms_H_12_5    :1; 
        unsigned ms_H_12_6    :1; 
        unsigned ms_H_12_0    :1; 
        unsigned ms_mn_pr12_cst2_O2  :1; 
        unsigned ms_mn_pr12_cst2_O3  :1; 
        unsigned ms_mn_pr12_pk_i5    :1; 
        unsigned ms_SYGN239   :1; 
        unsigned ms_T2385     :1; 
        unsigned ms_X35       :1; 
        unsigned ms_A15       :1; 
        unsigned ms_A14       :1; 
        unsigned ms_A13       :1; 
        unsigned ms_mn_pr12_pk_i6    :1; 
        unsigned ms_mn_pr12_otk_cvm  :1; 
        unsigned ms_mn_pr12_ud4      :1; 
        unsigned ms_mn_pr12_umin2    :1; 
        unsigned ms_mn_pr12_obk      :1; 
	} PR12_MC_1;
	
	struct {
		unsigned ms_mn_pr12_ok51  :1; 
        unsigned ms_sbrosprogramm  :1; 
        unsigned ms_isRPVU  :1; 
        unsigned ms_mn_pr12_ud61  :1; 
        unsigned ms_H_9_0  :1; 
        unsigned ms_H_11_0  :1; 
        unsigned ms_mn_pr12_cst2_04  :1; 
        unsigned ms_TS_35  :1; 
        unsigned ms_SYGN232  :1; 
        unsigned ms_mn_pr12_rus2  :1; 
        unsigned ms_SYGN62  :1; 
        unsigned ms_mn_pr12_pk_z7  :1; 
        unsigned ms_SYGN221  :1; 
        unsigned ms_TS_26  :1; 
        unsigned ms_mn_pr12_cst2_01  :1; 
        unsigned ms_SYGN_801  :1; 
        unsigned ms_SYGN1_802  :1; 
        unsigned ms_SYGN1_803  :1; 
        unsigned ms_SYGN1_804  :1; 
        unsigned ms_SYGN1_805  :1; 
        unsigned ms_SYGN1_806  :1; 
	} PR12_MC_2;
	

	PR12_MC_2;  
	   




} MNEMO_BUFF;

extern MNEMO_BUFF mnemo_buff;

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


#define KDU_1 mnemo_buff.KDU_1
#define KDU_2 mnemo_buff.KDU_2
#define KDU_3 mnemo_buff.KDU_3
#define KDU_4 mnemo_buff.KDU_4
#define KDU_5 mnemo_buff.KDU_5
#define KDU_6 mnemo_buff.KDU_6
#define KDU_7 mnemo_buff.KDU_7
#define KDU_8 mnemo_buff.KDU_8
#define KDU_9 mnemo_buff.KDU_9
#define KDU_10 mnemo_buff.KDU_10
#define KDU_11 mnemo_buff.KDU_11
#define KDU_12 mnemo_buff.KDU_12
#define KDU_13 mnemo_buff.KDU_13
#define KDU_14 mnemo_buff.KDU_14
#define KDU_15 mnemo_buff.KDU_15
#define KDU_16 mnemo_buff.KDU_16
#define KDU_17 mnemo_buff.KDU_17
#define KDU_18 mnemo_buff.KDU_18
#define KDU_MS1 mnemo_buff.KDU_MS1
#define OP_DPO1 mnemo_buff.OP_DPO1
#define OP_DPO2 mnemo_buff.OP_DPO2
#define PitSSWP_1 mnemo_buff.PitSSWP_1
#define PitSSWP_2 mnemo_buff.PitSSWP_2
#define OK39_ND_1 mnemo_buff.OK39_ND_1
#define OK39_ND_2 mnemo_buff.OK39_ND_2
#define OK39_ND_3 mnemo_buff.OK39_ND_3
#define OK39_ND_4 mnemo_buff.OK39_ND_4
#define OK39_ND_5 mnemo_buff.OK39_ND_5
#define OK39_ND_6 mnemo_buff.OK39_ND_6
#define PR12_MC_F mnemo_buff.PR12_MC_F;
#define PR12_MC_1 mnemo_buff.PR12_MC_1;
#define PR12_MC_2 mnemo_buff.PR12_MC_2;
#define PR12_MC_3 mnemo_buff.PR12_MC_3;
#define Mnemores_51 mnemo_buff.Mnemores_51


#endif 
