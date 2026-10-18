/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4cb4` (_code @ 0x2a4cb4, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_00153918. */
/* Supplied declaration required: FUN_002ad4f0. */


unsigned int FUN_002a4cb4(int *param_1,unsigned int *param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar11;
  unsigned int temp_v9;
  
  puVar4 = (unsigned int *)*param_1;
  if (puVar4 == (unsigned int *)0x0) {
    temp_v1 = 0xd8a02bf8;
  }
  else if (*(unsigned char *)((int)puVar4 + 1) >= 0xf) {
    temp_v1 = 0xd8a02a02;
  }
  else {
    temp_v3 = *puVar4;
    temp_v2 = (temp_v3 & 0xffff) >> 8;
    temp_v8 = param_2[6];
    puVar11 = (unsigned int *)((((temp_v3 & 0xff) + temp_v2) % 0xf) * 0x20 + 0x20 + *param_1);
    temp_v1 = *param_2;
    temp_v4 = param_2[1];
    temp_v5 = param_2[2];
    temp_v6 = param_2[3];
    temp_v7 = param_2[4];
    temp_v9 = param_2[5];
    puVar11[7] = param_2[7];
    puVar11[6] = temp_v8;
    *puVar11 = temp_v1;
    puVar11[1] = temp_v4;
    puVar11[2] = temp_v5;
    puVar11[3] = temp_v6;
    puVar11[4] = temp_v7;
    puVar11[5] = temp_v9;
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
      FUN_002ad4f0();
      FUN_00153918();
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
