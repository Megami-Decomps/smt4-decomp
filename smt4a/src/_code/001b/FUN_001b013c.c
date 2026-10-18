/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b013c` (_code @ 0x1b013c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001a2a5c. */
/* Supplied declaration required: nn_gxlow_CTR_Gpu_TriggerCmdReqQueue. */


unsigned int FUN_001b013c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  puVar5 = (unsigned int *)*param_1;
  if (puVar5 == (unsigned int *)0x0) {
    temp_v1 = 0xd8a02bf8;
  }
  else if (*(unsigned char *)((int)puVar5 + 1) >= 0xf) {
    temp_v1 = 0xd8a02a02;
  }
  else {
    temp_v3 = *puVar5;
    temp_v2 = (temp_v3 & 0xffff) >> 8;
    temp_v4 = *param_2;
    temp_v5 = param_2[1];
    temp_v6 = param_2[2];
    temp_v7 = param_2[3];
    temp_v10 = param_2[4];
    puVar5 = puVar5 + (((temp_v3 & 0xff) + temp_v2) % 0xf) * 8 + 8;
    temp_v8 = param_2[5];
    temp_v9 = param_2[6];
    puVar5[7] = param_2[7];
    *puVar5 = temp_v4;
    puVar5[1] = temp_v5;
    puVar5[2] = temp_v6;
    puVar5[3] = temp_v7;
    puVar5[4] = temp_v10;
    puVar5[5] = temp_v8;
    puVar5[6] = temp_v9;
    coproc_moveto_Data_Synchronization(0);
    temp_v2 = (((temp_v2 + 1) * 0x100) & 0xff00) | (temp_v3 & 0xffff00ff);
    while( 1 ) {
      temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)*param_1);
      if (temp_v0) break;
      temp_v2 = (((((*(unsigned int *)*param_1 & 0xffff) >> 8) + 1) * 0x100) & 0xff00) |
              (*(unsigned int *)*param_1 & 0xffff00ff);
    }
    *(unsigned int *)*param_1 = temp_v2;
    if ((temp_v2 & 0xffff) >> 8 == 1) {
      FUN_001a2a5c();
      nn_gxlow_CTR_Gpu_TriggerCmdReqQueue();
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
