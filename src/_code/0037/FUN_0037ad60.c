/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ad60` (_code @ 0x37ad60, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0037af98; /* 0x37af98 */

/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
extern int FUN_002bb218(void);
extern int FUN_002bd630(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_00379f0c. */
/* Supplied declaration required: FUN_0037b7d4. */


unsigned char FUN_0037ad60(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = *(int *)(param_1 + 4);
  if (temp_v5 != 0) {
    FUN_0037b7d4(param_1 + 0x2c4,*param_2);
    *(int *)(param_1 + 0x284) = param_1 + 0x2c4;
    *(int *)(param_1 + 0x288) = temp_v5;
    *(unsigned char **)(param_1 + 0x28c) = &LAB_0037af98;
    *(int *)(param_1 + 0x290) = param_1;
    *(unsigned int *)(param_1 + 0x294) = param_2[1];
    *(unsigned int *)(param_1 + 0x298) = *param_2;
    temp_v3 = ((unsigned int *)param_2[2])[1];
    *(unsigned int *)(param_1 + 0x29c) = *(unsigned int *)param_2[2];
    *(unsigned int *)(param_1 + 0x2a0) = temp_v3;
    temp_v3 = ((unsigned int *)param_2[3])[1];
    *(unsigned int *)(param_1 + 0x2a4) = *(unsigned int *)param_2[3];
    *(unsigned int *)(param_1 + 0x2a8) = temp_v3;
    temp_v3 = *(unsigned int *)(param_2[3] + 0xc);
    *(unsigned int *)(param_1 + 0x2ac) = *(unsigned int *)(param_2[3] + 8);
    *(unsigned int *)(param_1 + 0x2b0) = temp_v3;
    temp_v3 = *(unsigned int *)(param_2[3] + 0x14);
    *(unsigned int *)(param_1 + 0x2b4) = *(unsigned int *)(param_2[3] + 0x10);
    *(unsigned int *)(param_1 + 0x2b8) = temp_v3;
    temp_v3 = *(unsigned int *)(param_2[3] + 0x1c);
    *(unsigned int *)(param_1 + 700) = *(unsigned int *)(param_2[3] + 0x18);
    *(unsigned int *)(param_1 + 0x2c0) = temp_v3;
    temp_v3 = param_3[1];
    temp_v4 = param_3[2];
    *(unsigned int *)(param_1 + 0x25c) = *param_3;
    *(unsigned int *)(param_1 + 0x260) = temp_v3;
    *(unsigned int *)(param_1 + 0x264) = temp_v4;
    *(unsigned char *)(param_1 + 0x554) = 1;
    FUN_00379f0c(temp_v5);
    temp_v0 = FUN_002bb218();
    temp_v2 = temp_v0;
    FUN_002b5148(temp_v0,7);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0x3a;
    *(int *)(temp_v2 + 0x18) = param_1 + 0x268;
    temp_v1 = FUN_002bd630();
    FUN_002c3aa8(temp_v1 + 0x1c4);
    temp_v1 = *(int *)(param_1 + 0x528) + 1;
    *(int *)(param_1 + 0x528) = temp_v1;
    *(int *)(temp_v2 + 0x10) = temp_v1;
    *(int *)(temp_v2 + 0x14) = param_1 + 0x528;
    FUN_002b5124(temp_v0,temp_v2);
    temp_v2 = FUN_002bd630();
    FUN_002c3a24(temp_v2 + 0x1c4);
  }
  return temp_v5 != 0;
}
