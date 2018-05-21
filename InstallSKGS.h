//def_mnemo.h
struct{
	unsigned myW_mOB	            :1;  //0        
    unsigned myW_mBO                :1;  //1 
    unsigned myW_mKKS               :1;  //2 
    unsigned myW_mKKT               :1;  //3 
    unsigned myW_mMV                :1;  //4 
    unsigned myW_mag	            :1;  //5 
    unsigned myW_sBO	            :1;  //6 
    unsigned myW_sSU	            :1;  //7 
    unsigned myW_zgl     	        :1;  //8 
	unsigned myW_oKVDBOSU	        :1;	 //9 
    unsigned myW_DP_oKVDBOSU        :1;	 //10
    unsigned myW_DP_zKVDBOSU        :1;	 //11
    unsigned myW_W_zKVDBOSU	        :1;	 //12
    unsigned myW_oKSDBO 	        :1;	 //13
    unsigned myW_DP_oKSDBO          :1;	 //14
    unsigned myW_zKSDBO             :1;	 //15
    unsigned myW_DP_zKSDBO          :1;	 //16
    unsigned myW_oKVDOBSU           :1;  //17
    unsigned myW_DP_oKVDOBSU        :1;  //18
	unsigned myW_zKVDOBSU           :1;  //19
	unsigned myW_DP_zKVDOBSU        :1;  //20
	unsigned myW_otkrKVDBO          :1;  //21
	unsigned myW_otkrKVDBO_1        :1;  //22
	unsigned myW_otkrKVDOBSU        :1;  //23
	unsigned mW_otkrKVDOBSU_1       :1;  //24
	unsigned myW_otkrKSDBO          :1;  //25
	unsigned myW_otkrKSDBO_1        :1;  //26
	unsigned myW_otkrKSDSU          :1;  //27
	unsigned myW_lSB3               :1;  //28
	unsigned myG_R32                :1;  //29
}  SKGSMC_1
struct{
	unsigned myW_20c_o_KVD          :1;  //0 
	unsigned myW_20c_z_KVD          :1;  //1 
	unsigned myW_otk20c_o_KVD       :1;  //2 
	unsigned myW_otk20c_z_KVD       :1;	 //3 
	unsigned myW_30c_o              :1;  //4 
	unsigned myW_30c_z              :1;  //5 
	unsigned myW_20c_o_KSD          :1;  //6 
	unsigned myW_20c_z_KSD          :1;  //7 
	unsigned myW_otk20c_o_KSD       :1;  //8 
	unsigned myW_otk20c_z_KSD       :1;  //9 
	unsigned myW_otk30c_o           :1;  //10
	unsigned myW_otk30c_z           :1;  //11
	unsigned myW_vixSYGN82          :1;  //12
	unsigned myW_vixSYGN291         :1;  //13
	unsigned myW_vixSYGN292         :1;  //14
	unsigned myW_vixSYGN293         :1;  //15
	unsigned myW_PK_C1              :1;  //16
	unsigned myW_PK_C2              :1;  //17
	unsigned myW_PK_C3              :1;  //18
	unsigned myW_PK_C4              :1;  //19
	unsigned myW_PK_C5              :1;  //20
	unsigned myW_PK_C6              :1;  //21
	unsigned myW_PK_C7              :1;  //22
	unsigned myE_OPKVD              :1;  //23
	unsigned myE_CLKVD              :1;  //24
	unsigned myE_AOPKSD             :1;  //25
	unsigned myE_OPKSD              :1;  //26
	unsigned myE_CLKSD              :1;  //27
	unsigned myW_OBK3               :1;  //28
	unsigned myW_OBK11              :1;  //29
	unsigned myW_UD6                :1;  //30
	
} SKGSMC_2;
sttruct {
	unsigned mySYGN297              :1; //0
	unsigned mySYGN296              :1; //1
	unsigned mySYGN51               :1; //2
	unsigned mySYGN48               :1; //3
	unsigned myW_EM1                :1; //4
	unsigned myW_EM2                :1; //5
	unsigned myW600                 :1;//6
	unsigned myW602                 :1;//7
	unsigned myW604                 :1;//8
	unsigned myG1613                :1;//9
	unsigned myW606                 :1;//10
	unsigned myG1771                :1;//11
	unsigned myW646                 :1;//12
	
	/*unsigned my              :1;
	unsigned my              :1;
	unsigned my              :1;
	unsigned my              :1;
	unsigned my              :1;
	unsigned my              :1;
	unsigned my              :1;
	unsigned my              :1;*/
}SKGSMC_3;





#define SKGSMC_1 mnemo_buff.SKGSMC_1;
#define SKGSMC_2 mnemo_buff.SKGSMC_2;
#define SKGSMC_3 mnemo_buff.SKGSMC_3;
/////mnemo_lan_io_SKGS.c
#include "comm.h"

#include "def_mnemo.h"

void Uprav_SKGS()
{
   SKGSMC_1.myW_mOB	                =W_mOB;	      
   SKGSMC_1.myW_mBO                 =W_mBO;          
   SKGSMC_1.myW_mKKS                =W_mKKS;         
   SKGSMC_1.myW_mKKT                =W_mKKT;         
   SKGSMC_1.myW_mMV                 =W_mMV;          
   SKGSMC_1.myW_mag	                =W_mag;	      
   SKGSMC_1.myW_sBO	                =W_sBO;	      
   SKGSMC_1.myW_sSU	                =W_sSU;	      
   SKGSMC_1.myW_zgl     	        =W_zgl;     	  
   SKGSMC_1.myW_oKVDBOSU	        =W_oKVDBOSU;	  
   SKGSMC_1.myW_DP_oKVDBOSU         =W_DP_oKVDBOSU;  
   SKGSMC_1.myW_DP_zKVDBOSU        = W_DP_zKVDBOSU; 
   SKGSMC_1.myW_W_zKVDBOSU	        =W_W_zKVDBOSU;	  
   SKGSMC_1.myW_oKSDBO 	            =W_oKSDBO; 	  
   SKGSMC_1.myW_DP_oKSDBO           =W_DP_oKSDBO;    
   SKGSMC_1.myW_zKSDBO              =W_zKSDBO;       
   SKGSMC_1.myW_DP_zKSDBO           =W_DP_zKSDBO;    
   SKGSMC_1.myW_oKVDOBSU            =W_oKVDOBSU;     
   SKGSMC_1.myW_DP_oKVDOBSU         =W_DP_oKVDOBSU;  
   SKGSMC_1.myW_zKVDOBSU            =W_zKVDOBSU;     
   SKGSMC_1.myW_DP_zKVDOBSU         =W_DP_zKVDOBSU;  
   SKGSMC_1.myW_otkrKVDBO           =W_otkrKVDBO;    
   SKGSMC_1.myW_otkrKVDBO_1         =!W_otkrKVDBO;  
   SKGSMC_1.myW_otkrKVDOBSU         =W_otkrKVDOBSU;  
   SKGSMC_1.mW_otkrKVDOBSU_1        =!W_otkrKVDOBSU; 
   SKGSMC_1.myW_otkrKSDBO           =W_otkrKSDBO;    
   SKGSMC_1.myW_otkrKSDBO_1         =!W_otkrKSDBO;  
   SKGSMC_1.myW_otkrKSDSU           =W_otkrKSDSU;   
   SKGSMC_1.myW_lSB3                =W_lSB3;
   SKGSMC_1.myG_R32                 =G_R32;

   
   
   
  SKGSMC_2.myW_20c_o_KVD                    =W_20c_o_KVD    ;      
  SKGSMC_2.myW_20c_z_KVD                    =W_20c_z_KVD    ;
  SKGSMC_2.myW_otk20c_o_KVD                 =W_otk20c_o_KVD ;
  SKGSMC_2.myW_otk20c_z_KVD                 =W_otk20c_z_KVD ;
  SKGSMC_2.myW_30c_o                        =W_30c_o        ;
  SKGSMC_2.myW_30c_z                        =W_30c_z        ;
  SKGSMC_2.myW_20c_o_KSD                    =W_20c_o_KSD    ;
  SKGSMC_2.myW_20c_z_KSD                    =W_20c_z_KSD    ;
  SKGSMC_2.myW_otk20c_o_KSD                 =W_otk20c_o_KSD ;
  SKGSMC_2.myW_otk20c_z_KSD                 =W_otk20c_z_KSD ;
  SKGSMC_2.myW_otk30c_o                     =W_otk30c_o     ;
  SKGSMC_2.myW_otk30c_z                     =W_otk30c_z     ;
  SKGSMC_2.myW_vixSYGN82                    =W_vixSYGN82    ;
  SKGSMC_2.myW_vixSYGN291                   =W_vixSYGN291   ;
  SKGSMC_2.myW_vixSYGN292                   =W_vixSYGN292   ;
  SKGSMC_2.myW_vixSYGN293                   =W_vixSYGN293   ;
  SKGSMC_2.myW_PK_C1                        =W_PK_C1        ;
  SKGSMC_2.myW_PK_C2                        =W_PK_C2        ;
  SKGSMC_2.myW_PK_C3                        =W_PK_C3        ;
  SKGSMC_2.myW_PK_C4                        =W_PK_C4        ;
  SKGSMC_2.myW_PK_C5                        =W_PK_C5        ;
  SKGSMC_2.myW_PK_C6                        =W_PK_C6        ;
  SKGSMC_2.myW_PK_C7                        =W_PK_C7        ;
  SKGSMC_2.myE_OPKVD                        =E_OPKVD        ;
  SKGSMC_2.myE_CLKVD                        =E_CLKVD        ;
  SKGSMC_2.myE_AOPKSD                       =E_AOPKSD       ;
  SKGSMC_2.myE_OPKSD                        =E_OPKSD        ;
  SKGSMC_2.myE_CLKSD                        =E_CLKSD        ;
  SKGSMC_2.myW_OBK3                         =W_OBK3         ;
  SKGSMC_2.myW_OBK11                        =W_OBK11        ;
  SKGSMC_2.myW_UD6                          =W_UD6          ;
  
  
  SKGSMC_3.mySYGN297                        =SYGN297;
  SKGSMC_3.mySYGN296                        =SYGN296;
  SKGSMC_3.mySYGN51                        =SYGN51;
  SKGSMC_3.mySYGN48                         =SYGN48;
  SKGSMC_3.myW_EM1                          =W_EM1;
  SKGSMC_3.myW_EM2                          =W_EM2;
  SKGSMC_3.myW600                           =W600 ;        
  SKGSMC_3.myW602                           =W602 ; 
  SKGSMC_3.myW604                           =W604 ; 
  SKGSMC_3.myG1613                          =G1613; 
  SKGSMC_3.myW606                           =W606 ; 
  SKGSMC_3.myG1771                          =G1771; 
  SKGSMC_3.myW646                           =W646 ; 
  
  
  
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//makefile_lan_rt
$(LAN_SOFT_OBJ)/mnemo_lan_io_SKGS.o\


$(LAN_SOFT_OBJ)/mnemo_lan_io_SKGS.o: $(LAN_SOFT_SRC)/mnemo_lan_io_SKGS.c $(H_LIST) $(ID)/def_mnemo.h
	echo "  CPP  mnemo_lan_io.c_SKGS" && g++ $(CPPFLAGS) $(LAN_SOFT_SRC)/mnemo_lan_io_SKGS.c  -c -o $(LAN_SOFT_OBJ)/mnemo_lan_io_SKGS.o



