/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2384` (_code @ 0x1e2384, 0x1c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447060; /* 0x447060 */
extern int DAT_00447e88; /* 0x447e88 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0027d9b8(void);
/* Supplied declaration required: FUN_0027da20. */
/* Supplied declaration required: FUN_00287d54. */


void FUN_001e2384(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = DAT_00447060;
  if (param_1 != 0) {
    FUN_0027da20(*(unsigned int *)(DAT_00447060 + 0x40),param_1,param_2);
    temp_v1 = FUN_0027d9b8();
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x4ebc) = temp_v2;
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x4ec0) = temp_v2;
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x4ec4) = temp_v2;
  }
  else {
    temp_v2 = *(unsigned int *)(DAT_00447e88 + 0x20);
    temp_v5 = *(unsigned int *)(DAT_00447e88 + 0x24);
    *(unsigned int *)(DAT_00447060 + 0x4ebc) = *(unsigned int *)(DAT_00447e88 + 0x1c);
    *(unsigned int *)(temp_v0 + 0x4ec0) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x4ec4) = temp_v5;
  }
  FUN_0027da20(*(unsigned int *)(temp_v0 + 0x40),param_3,param_4);
  temp_v1 = FUN_0027d9b8();
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x4ec8) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x4ecc) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x4ed0) = temp_v2;
  temp_v3 = *(float *)(temp_v0 + 0x4ebc);
  FUN_00287d54();
  temp_v6 = *(float *)(temp_v0 + 0x4ec8) - *(float *)(temp_v0 + 0x4ebc);
  *(float *)(temp_v0 + 0x4edc) = *(float *)(temp_v0 + 0x4ed0) - *(float *)(temp_v0 + 0x4ec4);
  *(float *)(temp_v0 + 0x4ed4) = temp_v6;
  *(float *)(temp_v0 + 0x4ed8) = *(float *)(temp_v0 + 0x4ecc) - *(float *)(temp_v0 + 0x4ec0);
  temp_v4 = 1.0f / temp_v3;
  *(float *)(temp_v0 + 0x4ed4) = temp_v6 * temp_v4;
  *(float *)(temp_v0 + 0x4ed8) = *(float *)(temp_v0 + 0x4ed8) * temp_v4;
  *(float *)(temp_v0 + 0x4edc) = *(float *)(temp_v0 + 0x4edc) * temp_v4;
  *(unsigned int *)(temp_v0 + 0x4ee0) = 0x41f00000;
  *(unsigned int *)(temp_v0 + 0x4ee4) = 0;
  *(int *)(temp_v0 + 0x4ee8) = (int)(temp_v3 / 30.0f);
  temp_v1 = DAT_00447e88;
  temp_v2 = *(unsigned int *)(temp_v0 + 0x4ebc);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x4ec0);
  temp_v7 = *(unsigned int *)(temp_v0 + 0x4ec4);
  puVar3 = (unsigned int *)(DAT_00447e88 + 0x28);
  *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x20) = temp_v5;
  *(unsigned int *)(temp_v1 + 0x24) = temp_v7;
  *puVar3 = temp_v2;
  *(unsigned int *)(temp_v1 + 0x2c) = temp_v5;
  *(unsigned int *)(temp_v1 + 0x30) = temp_v7;
  temp_v0 = DAT_00447060;
  if (*(int *)(DAT_00447060 + 0xcc) != 5) {
    *(unsigned int *)(DAT_00447060 + 0xd0) = 0;
    *(unsigned int *)(temp_v0 + 0xcc) = 5;
    *(unsigned int *)(temp_v0 + 0xd4) = 0;
  }
  return;
}
