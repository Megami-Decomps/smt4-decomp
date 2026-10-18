/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00401178` (_code @ 0x401178, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0056fcc0; /* 0x56fcc0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00401178(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int in_s0;
  unsigned int in_s1;
  float temp_v7;
  float temp_v8;
  unsigned int in_s2;
  float temp_v9;
  unsigned int temp_v10;
  
  *(unsigned int *)(param_1 + 0x58) = param_2;
  *(unsigned int *)(param_1 + 0x5c) = param_3;
  *(unsigned int *)(param_1 + 0x60) = param_4;
  *(unsigned int *)(param_1 + 0x70) = in_s0;
  *(unsigned int *)(param_1 + 0x74) = in_s1;
  *(unsigned int *)(param_1 + 0x78) = in_s2;
  *(unsigned int *)(param_1 + 100) = param_5;
  *(unsigned int *)(param_1 + 0x68) = param_6;
  *(unsigned int *)(param_1 + 0x6c) = param_7;
  temp_v0 = *(int *)(DAT_0056fcc0 + 4);
  if (temp_v0 == 0) {
    return;
  }
  temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x68),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x6c),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = *(unsigned int *)(param_1 + 0x5c);
  temp_v1 = *(unsigned int *)(param_1 + 0x60);
  temp_v3 = *(unsigned int *)(param_1 + 100);
  temp_v6 = (*(unsigned int *)(temp_v0 + 0xcc) & 0x80000000) != 0;
  temp_v5 = *(int *)(param_1 + 0x58);
  temp_v8 = temp_v7 * 0.001f + 25570.0f;
  if (temp_v6) {
    temp_v8 = *(float *)(param_1 + 0x74);
  }
  temp_v2 = 0;
  temp_v10 = *(unsigned int *)(param_1 + 0x70);
  temp_v7 = temp_v7 * 0.001f + temp_v9 * 0.001f + 25570.0f;
  if (temp_v6) {
    temp_v7 = *(float *)(param_1 + 0x78);
  }
  if (((temp_v5 != 0) && (temp_v2 = (unsigned int)(temp_v5 == 1), temp_v5 != 1)) && (temp_v5 == 2)) {
    temp_v2 = 2;
  }
  *(float *)(temp_v0 + 0x17c) = temp_v8;
  *(float *)(temp_v0 + 0x180) = temp_v7;
  *(unsigned int *)(temp_v0 + 0x184) = 0;
  *(unsigned int *)(temp_v0 + 0x188) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x18c) = temp_v10;
  *(unsigned int *)(temp_v0 + 400) =
       (temp_v4 & 0xff) | ((temp_v1 & 0xff) << 8) | ((temp_v3 & 0xff) << 0x10) | (temp_v2 << 0x18);
  return;
}
