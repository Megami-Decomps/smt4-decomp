/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001108c0` (_code @ 0x1108c0, 0xc2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b830(unsigned int [2]);
int onlineSockAddrConstruct(unsigned char [8]);
int onlineUrlSetAddress(...);
int onlineUrlDestroy(...);
int FUN_002ee568(...);
int FUN_002f5044(unsigned int [2]);
int clearWords2(unsigned int [2]);
int FUN_002fbabc(...);
int FUN_002fbac6(...);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern unsigned char LAB_00110984; /* 0x110984 */

/* Supplied declaration required: FUN_0010b830. */
/* Supplied declaration required: onlineSockAddrConstruct. */
/* Supplied declaration required: onlineUrlSetAddress. */
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_002ee568. */
/* Supplied declaration required: FUN_002f5044. */
/* Supplied declaration required: clearWords2. */
/* Supplied declaration required: FUN_002fbabc. */
/* Supplied declaration required: FUN_002fbac6. */


unsigned int FUN_001108c0(int *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [8];
  unsigned int temp_v4;
  unsigned int temp_v5 [2];
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [108];
  
  clearWords2(temp_v5);
  FUN_0010b830(temp_v5);
  if (temp_v5[0] != 0) {
    for (temp_v2 = 0; temp_v2 < temp_v5[0]; temp_v2 = temp_v2 + 1) {
      temp_v0 = FUN_002fbabc(temp_v5,temp_v2);
      if (-1 < *(int *)(temp_v0 + 0xc) << 0x1d) {
        FUN_002ee568(temp_v7,&LAB_00110984);
        onlineSockAddrConstruct(temp_v3);
        puVar2 = (unsigned int *)FUN_002fbabc(temp_v5,temp_v2);
        temp_v4 = *puVar2;
        onlineUrlSetAddress(temp_v7,temp_v3);
        FUN_002fbac6(param_2,temp_v7);
        onlineUrlDestroy(temp_v7);
      }
    }
    if (*(int *)(param_2 + 0x14) == 0) {
      FUN_002ee568(temp_v6,&LAB_00110984);
      onlineSockAddrConstruct(temp_v3);
      puVar2 = (unsigned int *)FUN_002fbabc(temp_v5,0);
      temp_v4 = *puVar2;
      onlineUrlSetAddress(temp_v6,temp_v3);
      FUN_002fbac6(param_2,temp_v6);
      onlineUrlDestroy(temp_v6);
    }
    temp_v1 = FUN_002fbabc(temp_v5,0);
    (**(romwright_code **)(*param_1 + 0x28))(param_1,temp_v1);
    FUN_002f5044(temp_v5);
    temp_v1 = 1;
  }
  else {
    FUN_002f5044(temp_v5);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
