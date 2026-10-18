/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4014` (_code @ 0x1f4014, 0x158 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7118. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_001f4014(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned char *pbVar6;
  unsigned int in_fpscr;
  unsigned char temp_v2 [84];
  
  temp_v1 = DAT_0043da2c;
  puVar3 = temp_v2;
  puVar4 = temp_v2;
  temp_v0 = *(unsigned char *)(DAT_0043da2c + 0x555);
  pbVar6 = (unsigned char *)(DAT_0043da2c + 0x555);
  puVar5 = (unsigned char *)0x0;
  if (temp_v0 != 0) {
    FUN_002c5ff4(temp_v2,param_1);
    temp_v2[temp_v0] = 0;
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,*(unsigned int *)(temp_v1 + 0x4cc),temp_v2);
    FUN_002b7118(temp_v2,3);
    puVar5 = puVar3;
  }
  temp_v0 = *(unsigned char *)(temp_v1 + 0x556);
  FUN_002c5ff4(temp_v2,(unsigned int)*(unsigned char *)(temp_v1 + 0x555) + param_1,(unsigned int)temp_v0);
  temp_v2[temp_v0] = 0;
  VectorSignedToFloat(puVar5 + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(3,*(unsigned int *)(temp_v1 + 0x550),temp_v2);
  FUN_002b7118(temp_v2,3);
  FUN_002c5ff4(temp_v2,(unsigned int)*pbVar6 + (unsigned int)*(unsigned char *)(temp_v1 + 0x556) + param_1,
               (0x40 - (unsigned int)*pbVar6) - (unsigned int)*(unsigned char *)(temp_v1 + 0x556));
  VectorSignedToFloat(puVar4 + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(3,*(unsigned int *)(temp_v1 + 0x4cc),temp_v2);
  return;
}
