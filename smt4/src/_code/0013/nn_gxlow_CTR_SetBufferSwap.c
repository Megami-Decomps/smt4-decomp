/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_SetBufferSwap` (_code @ 0x13b180, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
extern int FUN_002ad244(void);


void nn_gxlow_CTR_SetBufferSwap
               (int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
               unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char *pbVar4;
  unsigned int *puVar5;
  
  temp_v1 = FUN_002ad244();
  if ((unsigned int)param_1 < 2) {
    pbVar4 = *(unsigned char **)(temp_v1 + 0x5c + param_1 * 4);
    temp_v2 = 1 - *pbVar4;
    pbVar4 = pbVar4 + temp_v2 * 0x1c + 4;
    *(int *)pbVar4 = param_2;
    *(unsigned int *)(pbVar4 + 0x18) = 0;
    *(unsigned int *)(pbVar4 + 4) = param_3;
    *(unsigned int *)(pbVar4 + 8) = param_4;
    *(unsigned int *)(pbVar4 + 0xc) = param_5;
    *(unsigned int *)(pbVar4 + 0x10) = param_6;
    *(unsigned int *)(pbVar4 + 0x14) = param_7;
    coproc_moveto_Data_Synchronization(0);
    do {
      puVar5 = *(unsigned int **)(temp_v1 + 0x5c + param_1 * 4);
      temp_v0 = (unsigned char)hasExclusiveAccess(puVar5);
    } while (!temp_v0);
    *puVar5 = (*puVar5 & 0xffff0000) | temp_v2 | 0x100;
  }
  return;
}
