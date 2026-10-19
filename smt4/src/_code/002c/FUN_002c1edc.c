/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1edc` (_code @ 0x2c1edc, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_0013afbc. */
/* Supplied declaration required: FUN_002b77b0. */
/* Supplied declaration required: FUN_002b77f4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34LookAtC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */


void FUN_002c1edc(char *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_s16; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  unsigned int in_s16;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v3 = 0;
  temp_v4 = 0x3f800000;
  *(unsigned int *)(param_1 + 4) = *param_2;
  *(unsigned int *)(param_1 + 8) = temp_v0;
  *(unsigned int *)(param_1 + 0xc) = temp_v1;
  temp_v0 = param_3[1];
  temp_v1 = param_3[2];
  *(unsigned int *)(param_1 + 0x10) = *param_3;
  *(unsigned int *)(param_1 + 0x14) = temp_v0;
  *(unsigned int *)(param_1 + 0x18) = temp_v1;
  temp_v0 = param_4[1];
  temp_v1 = param_4[2];
  *(unsigned int *)(param_1 + 0x1c) = *param_4;
  *(unsigned int *)(param_1 + 0x20) = temp_v0;
  *(unsigned int *)(param_1 + 0x24) = temp_v1;
  param_1[1] = '\0';
  temp_v2 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x18);
  if ((*(float *)(param_1 + 4) - *(float *)(param_1 + 0x10)) *
      (*(float *)(param_1 + 4) - *(float *)(param_1 + 0x10)) +
      (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x14)) *
      (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x14)) + temp_v2 * temp_v2 == 0.0f) {
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 1.0f;
  }
  uStack_10 = in_s16;
  nn_math_ARMv6_MTX34LookAtC_FAST(param_1 + 0x38,param_1 + 4,param_1 + 0x1c,param_1 + 0x10);
  FUN_002b77f4(param_1 + 0x128,param_1 + 0x38);
  FUN_002b77b0(param_1 + 0x38,param_1 + 0x68,0x30);
  *(unsigned int *)(param_1 + 0x98) = temp_v3;
  *(unsigned int *)(param_1 + 0x9c) = temp_v3;
  *(unsigned int *)(param_1 + 0xa0) = temp_v3;
  *(unsigned int *)(param_1 + 0xa4) = temp_v4;
  *(unsigned int *)(param_1 + 0x198) = *(unsigned int *)(param_1 + 0x68);
  *(unsigned int *)(param_1 + 0x19c) = *(unsigned int *)(param_1 + 0x6c);
  *(unsigned int *)(param_1 + 0x1a0) = *(unsigned int *)(param_1 + 0x70);
  *(unsigned int *)(param_1 + 0x1a4) = *(unsigned int *)(param_1 + 0x74);
  *(unsigned int *)(param_1 + 0x1b8) = *(unsigned int *)(param_1 + 0x88);
  *(unsigned int *)(param_1 + 0x1a8) = *(unsigned int *)(param_1 + 0x78);
  *(unsigned int *)(param_1 + 0x1ac) = *(unsigned int *)(param_1 + 0x7c);
  *(unsigned int *)(param_1 + 0x1b0) = *(unsigned int *)(param_1 + 0x80);
  *(unsigned int *)(param_1 + 0x1b4) = *(unsigned int *)(param_1 + 0x84);
  *(unsigned int *)(param_1 + 0x1bc) = *(unsigned int *)(param_1 + 0x8c);
  *(unsigned int *)(param_1 + 0x1c0) = *(unsigned int *)(param_1 + 0x90);
  *(unsigned int *)(param_1 + 0x1c4) = *(unsigned int *)(param_1 + 0x94);
  *(unsigned int *)(param_1 + 0x1c8) = *(unsigned int *)(param_1 + 0x98);
  *(unsigned int *)(param_1 + 0x1cc) = *(unsigned int *)(param_1 + 0x9c);
  *(unsigned int *)(param_1 + 0x1d0) = temp_v3;
  *(unsigned int *)(param_1 + 0x1d4) = temp_v4;
  nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x198,param_1 + 0x198);
  if (*param_1 == '\0') {
    return;
  }
  FUN_0013afbc(param_1 + 0x38,param_1 + 0x4b8,&uStack_30);
  *(unsigned int *)(param_1 + 0x4c4) = uStack_30;
  *(unsigned int *)(param_1 + 0x4c8) = uStack_2c;
  *(unsigned int *)(param_1 + 0x4cc) = uStack_28;
  *(unsigned int *)(param_1 + 0x4d0) = uStack_24;
  *(unsigned int *)(param_1 + 0x4d4) = uStack_20;
  *(unsigned int *)(param_1 + 0x4d8) = uStack_1c;
  *(unsigned int *)(param_1 + 0x4dc) = uStack_18;
  *(unsigned int *)(param_1 + 0x4e0) = uStack_14;
  *(unsigned int *)(param_1 + 0x4e4) = uStack_10;
  return;
}
