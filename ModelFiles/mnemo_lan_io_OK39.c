#include "comm.h"

#include "def_mnemo.h"

void UpraOK39()
{
	 
  OK39_ND_1.MS_Selection1CEU  =MS_Section1CEU;
  OK39_ND_1.MS_Selection2CEU  =MS_Section2CEU;
  OK39_ND_1.MS_Section1SC     =MS_Section1SC;
  OK39_ND_1.MS_Section2SC     =MS_Section2SC; 
  OK39_ND_1.MS_SuperCharging  =MS_SuperCharging;
  OK39_ND_1.MS_OffBlockingSC  =MS_OffBlockingSC;              /* 6 */
  OK39_ND_1.MS_UnionCollectors =MS_UnionCollectors;            /* 7 */
  OK39_ND_1.MS_Mark94p_m      = MS_Mark94;                     /* kdu 0 1 - Мнемосхема. Общее. Признак 94 */      
  OK39_ND_1.MS_Mark106m =MS_Mark106;                    /* kdu 0 1 - Мнемосхема. Общее. Признак 106 */
  OK39_ND_1.MS_Mark93m =MS_Mark93;
  OK39_ND_1.MS_Mark98m =MS_Mark98;
 OK39_ND_1. MS_Mark99p =MS_Mark99;
  OK39_ND_1.MS_Mark19p =MS_Mark19;
  OK39_ND_1.MS_Mark39p =MS_Mark39;
   OK39_ND_1.MS_Mark40p =MS_Mark40;
  OK39_ND_1.MS_Mark148p =MS_Mark148;
  OK39_ND_1.MS_Mark101p =MS_Mark101;
  OK39_ND_1.MS_Mark155p =MS_Mark155;
  OK39_ND_1.MS_Mark156p =MS_Mark156;
  OK39_ND_1.MS_Mark147m =MS_Mark147;
  OK39_ND_1.MS_Mark158p_m =  MS_Mark158;    
  OK39_ND_1.MS_Mark66p_m =MS_Mark66;
  OK39_ND_1.MS_Mark141p =MS_Mark141;
  OK39_ND_1.MS_Mark91p_m = MS_Mark91;    //not  
  OK39_ND_1.MS_Mark122p     =MS_Mark122; //not
  OK39_ND_1.MS_LogicOperation8_33 =MS_LogicOperation8_33;
  OK39_ND_1.MS_CC1 =MS_CC1;
  OK39_ND_1.MS_CC2 =MS_CC2;
   OK39_ND_1.MS_CC32 =MS_CC32; 
          OK39_ND_1.MS_CC33 =MS_CC33;
          OK39_ND_1.MS_CC29 =MS_CC29; 
 
 
  OK39_ND_2.MS_CC39 =MS_CC39;
  OK39_ND_2.MS_CC48 =MS_CC48;
  OK39_ND_2.MS_CC49 =MS3_CC49_Line;
  OK39_ND_2.MS_CC62 =MS_CC62; 
  OK39_ND_2.MS_KR_UA1 =MS_KR_UA1;
  OK39_ND_2.MS_MC27 =MS_MC27; 
  OK39_ND_2.MS_MC70 =MS_MC70;
  OK39_ND_2.MS_ACE1 =MS_ACE1;
  OK39_ND_2.MS_MC30 =MS_MC30;
  OK39_ND_2.MS_MC42 =MS_MC42; 
  OK39_ND_2.MS_KR_UA6 =MS_KR_UA6;
  OK39_ND_2.MS_KR_UA9 =MS_KR_UA9;
  OK39_ND_2.MS_KR_SH14=MS_KR_SH14;
  OK39_ND_2.MS_PK_I13 =MS_PK_I13; 
  OK39_ND_2.MS_PK_I6 =MS_PK_I6; 
  OK39_ND_2.MS_MC3 = MS_MC3;
  OK39_ND_2.MS_SU5 = MS_SU5;
  OK39_ND_2.MS_MC4 =MS_MC4; 
  OK39_ND_2.MS_KZ =MS_KZ;
  OK39_ND_2.MS_SEP2 =MS_SEP2; 
  OK39_ND_2.MS_PK_I5 =MS_PK_I5; 
  OK39_ND_2.MS_MC73 =MS_MC73; 
  OK39_ND_2.MS_PK_L17 = MS_PK_L17;
  OK39_ND_2.MS_VIC18 =MS_VIC18;  
  OK39_ND_2.MS_RUS3 =MS_RUS3; 
 OK39_ND_2.MS_PK_K15 =MS_PK_K15; 
  OK39_ND_2.MS_MC1 =MS_MC1; 
  OK39_ND_2.MS_MC26 =MS_MC26; 
  OK39_ND_2.MS_PK_D17 = MS_PK_D17; 
  OK39_ND_2.MS_PK_G17 =MS_PK_G17; 
  OK39_ND_2.MS_KR_YU5 =MS_KR_YU5; 
 
 
 
 
 
 
 
 
  OK39_ND_3.MS_KR_YU6= MS_KR_YU6;
 OK39_ND_3.MS_PK_D5 =MS_PK_D5;
 OK39_ND_3.MS3_EVOF1=MS3_EVOF1;
 OK39_ND_3.MS3_EVOF2=MS3_EVOF2; 
 OK39_ND_3.MS3_EVOF3=MS3_EVOF3;
 OK39_ND_3.MS3_Col1 =0;
 OK39_ND_3.MS3_Col2=0;
 OK39_ND_3.MS3_VIC1_Key =MS3_VIC1_Key;
 OK39_ND_3.MS3_VIC2_Key =MS3_VIC2_Key;
 OK39_ND_3.MS3_EVOF1_Key1 =MS3_EVOF1_Key1; 
 OK39_ND_3.MS3_EVOF1_Key2 = MS3_EVOF1_Key2; 
 OK39_ND_3.MS3_EVOF2_Key1 =MS3_EVOF2_Key1; 
 OK39_ND_3.MS3_EVOF2_Key2 =MS3_EVOF2_Key2;
 OK39_ND_3.MS3_EVOF_Key1 =MS3_EVOF3_Key1;                
 OK39_ND_3.MS3_EVOF_Key2 =MS3_EVOF_Key2;                 
 OK39_ND_3.MS3_Efir_Pwr_Key= MS3_Efir_Pwr_Key;              /* kdu 0 1 - Мнемосхема 3. Ключ +-П ЭФИР (СИРТ) */      
 OK39_ND_3.MS3_CC39_Key1 =
 OK39_ND_3.MS3_CC39_Key2 =
 OK39_ND_3.MS3_CC39_Key3 =
 OK39_ND_3.MS3_MC43_Line = MS3_MC43_Line; 
 OK39_ND_3.MS3_PK_G15_Line =MS3_PK_G15_Line; 
 OK39_ND_3.MS3_Mark101_Line =MS3_Mark101_Line;
 OK39_ND_3.MS3_PK_G7_Line =MS3_PK_G7_Line;
 OK39_ND_3.MS3_PK_G8_Line =MS3_PK_G8_Line;
 OK39_ND_3.MS3_KR_E6_Line = MS3_KR_E6_Line; 
 OK39_ND_3.MS3_KR_E7_Line =MS3_KR_E7_Line;
 OK39_ND_3.MS3_SU2_Line =MS3_SU2_Line;
 OK39_ND_3.MS3_PK_V3_Line =MS3_PK_V3_Line;
 OK39_ND_3.MS3_PK_V4_Line =MS3_PK_V4_Line;
 OK39_ND_3.MS3_MC27_Line = MS3_MC27_Line;
 OK39_ND_3.MS3_ACE1_Line =MS3_ACE1_Line;
 
 
 
 
 
 
 
 OK39_ND_4.MS3_PK_A4_Line = MS3_PK_A4_Line;
  OK39_ND_4.MS3_Mark91_Line =MS3_Mark91_Line; 
  OK39_ND_4.MS3_Mark_91_Line = MS3_Mark_91_Line; 
  OK39_ND_4.MS3_MC42_Line =MS3_MC42_Line;
  OK39_ND_4.MS3_MC29_Line =MS3_MC29_Line;
  OK39_ND_4.MS3_PK_A3_Line =MS3_PK_A3_Line; 
  OK39_ND_4.MS3_MC69_Line = MS3_MC69_Line;
  OK39_ND_4.MS3_Mark94_Line =MS3_Mark94_Line;
  OK39_ND_4.MS3_Mark_94_Line =MS3_Mark_94_Line;
  OK39_ND_4.MS3_PK_V1_Line =MS3_PK_V1_Line; 
  OK39_ND_4.MS3_PK_V2_Line =MS3_PK_V2_Line;
  OK39_ND_4.MS3_SU1_Line =MS3_SU1_Line; 
  OK39_ND_4.MS3_KR_UA6_Line =MS3_KR_UA6_Line; 
  OK39_ND_4.MS3_KR_UA9_Line =MS3_KR_UA9_Line; 
  OK39_ND_4.MS3_VIC2_Line = MS3_VIC2_Line; 
  OK39_ND_4.MS3_PK_I13_Line =MS3_PK_I13_Line;
  OK39_ND_4.MS3_VIC1_Line = MS3_VIC1_Line;
  OK39_ND_4.MS3_PK_I6_Line =MS3_PK_I6_Line;
  OK39_ND_4.MS3_MC3_Line =MS3_MC3_Line;
  OK39_ND_4.MS3_SU5_Line =MS3_SU5_Line;
  OK39_ND_4.MS3_MC4_Line3 = MS3_MC4_Line3;
  OK39_ND_4.MS3_KZ_Line3 = MS3_KZ_Line3;
  OK39_ND_4.MS3_SEP2_Line = MS3_SEP2_Line; 
   OK39_ND_4.MS3_PK_I5_Line =MS3_PK_I5_Line; 
  OK39_ND_4.MS3_MC73_Line = MS3_MC73_Line;
  OK39_ND_4.MS3_RUS3_Line =MS3_RUS3_Line; 
  OK39_ND_4.MS3_PK_K15_Line =MS3_PK_K15_Line; 
  OK39_ND_4.MS3_PK_DG17_Line1 =MS3_PK_DG17_Line1; 
  OK39_ND_4.MS3_PK_DG17_Line2 = MS3_PK_DG17_Line2;
  OK39_ND_4.MS3_KR_YU5_6_Line =MS3_KR_YU5_6_Line;
  OK39_ND_4.MS3_PK_D5_Line =MS3_PK_D5_Line;
 
 
 
 
 
 
  OK39_ND_5.MS3_OpenValve1_Line =MS3_OpenValve1_Line;
  OK39_ND_5.MS3_OpenV  alve2_Line =MS3_OpenValve2_Line;
  OK39_ND_5.MS3_CloseValves_Line = MS3_CloseValve1_Line;
  OK39_ND_5.MS3_CC39_Line =MS3_CC39_Line;
  OK39_ND_5.MS3_CC48_Line =MS3_CC48_Line;	
  OK39_ND_5.MS3_CC49not122 =MS_CC49; 
   OK39_ND_5.MS3_Mark122_Line1 =MS3_Mark122_Line1;
  OK39_ND_5.MS3_MC4_Line1 =MS3_MC4_Line1;
  OK39_ND_5.MS3_MC4_Line2 =MS3_MC4_Line2;
  OK39_ND_5.MS3_KZ_Line1 =MS3_KZ_Line1;
  OK39_ND_5.MS3_KZ_Line2            =MS3_KZ_Line2;
   OK39_ND_5.MS3_CC2_Line =MS3_CC2_Line;
  OK39_ND_5.MS3_EPSV1=MS3_EPSV1;
  OK39_ND_5.MS3_EPSV2=MS3_EPSV2;  
  OK39_ND_5.MS3_PV1=MS3_PV1;
  OK39_ND_5.MS3_PV2= MS3_PV2;
  OK39_ND_5.MS_Close_value_2= MS3_CloseValve2_Line;
  OK39_ND_5.MS3_SH14_Key =               MS3_SH14_Key ;          
  OK39_ND_5.MS3_SKD1_Key =               MS3_SKD1_Key ;          
  OK39_ND_5.MS3_OVK1_Key =               MS3_OVK1_Key ;          
  OK39_ND_5.MS3_EVOF1_Key2_Line =        MS3_EVOF1_Key2_Line ;   
  OK39_ND_5.MS3_EVOF2_Key2_Line =        MS3_EVOF2_Key2_Line ;   
  OK39_ND_5.MS3_EVOF_Key2_Line =        MS3_EVOF_Key2_Line ;    
  OK39_ND_5. MS3_SKD1_Key_Line =         MS3_SKD1_Key_Line ;    
  OK39_ND_5.MS3_OVK1_Key_Line =         MS3_OVK1_Key_Line ;     
  OK39_ND_5.MS3_SH14_Key_Line =         MS3_SH14_Key_Line ;     
  
  
  
  
  
  
 
 
 
  OK39_ND_6.MS3_EVOF1_Pipe=MS3_EVOF1_Pipe;
  OK39_ND_6.MS3_EVOF2_Pipe=MS3_EVOF2_Pipe;
  OK39_ND_6.MS3_EPSV1_Pipe=MS3_EPSV1_Pipe;
  OK39_ND_6.MS3_EPSV2_Pipe=MS3_EPSV2_Pipe;
  OK39_ND_6.MS3_Ballon1_Pipe=MS3_Ballon1_Pipe; 
  OK39_ND_6.MS3_Ballon2_Pipe=MS3_Ballon2_Pipe;   
  OK39_ND_6.MS3_Col1_new=MS3_Col1;
  OK39_ND_6.M3_col2_new=MS3_Col2;
}


