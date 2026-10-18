/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f0dc` (_code @ 0x14f0dc, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_00162330. */
/* Supplied declaration required: FUN_00167bc8. */
/* Supplied declaration required: FUN_0018aa5c. */
/* Supplied declaration required: FUN_0018af48. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */


void FUN_0014f0dc(char *param_1,unsigned int *param_2,float *param_3,float *param_4)

{
/* irregular: irregular input(s): in_s16; 6 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int in_s16;
  unsigned int temp_v6;
  int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v2 = param_2[1];
  temp_v4 = param_2[2];
  temp_v6 = 0;
  *(unsigned int *)(param_1 + 4) = *param_2;
  *(unsigned int *)(param_1 + 8) = temp_v2;
  *(unsigned int *)(param_1 + 0xc) = temp_v4;
  temp_v1 = *param_3;
  temp_v3 = param_3[1];
  temp_v5 = param_3[2];
  *(float *)(param_1 + 0x10) = temp_v1;
  *(float *)(param_1 + 0x14) = temp_v3;
  *(float *)(param_1 + 0x18) = temp_v5;
  temp_v5 = param_4[1];
  temp_v0 = param_4[2];
  *(float *)(param_1 + 0x1c) = *param_4;
  *(float *)(param_1 + 0x20) = temp_v5;
  *(float *)(param_1 + 0x24) = temp_v0;
  param_1[1] = '\0';
  temp_v0 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x18);
  temp_v1 = *(float *)(param_1 + 4) - temp_v1;
  temp_v3 = *(float *)(param_1 + 8) - temp_v3;
  temp_v5 = temp_v1 * temp_v1 + temp_v3 * temp_v3 + temp_v0 * temp_v0;
  if (temp_v5 != 0.0f) {
    temp_v2 = 0x3f800000;
    temp_v5 = 1.0f / romwright_sqrt_4(temp_v5);
    temp_v5 = temp_v1 * temp_v5 * *param_4 + temp_v3 * temp_v5 * param_4[1] + temp_v0 * temp_v5 * param_4[2];
    if ((temp_v5 != 1.0f) && (temp_v5 != -1.0f)) {
      uStack_10 = in_s16;
      FUN_0018aa5c(param_1 + 0x38,param_1 + 4,param_1 + 0x1c,param_1 + 0x10);
      FUN_00162330(param_1 + 0x128,param_1 + 0x38);
      FUN_00167bc8(param_1 + 0x38,param_1 + 0x68,0x30);
      *(unsigned int *)(param_1 + 0x98) = temp_v6;
      *(unsigned int *)(param_1 + 0x9c) = temp_v6;
      *(unsigned int *)(param_1 + 0xa0) = temp_v6;
      *(unsigned int *)(param_1 + 0xa4) = temp_v2;
      *(unsigned int *)(param_1 + 0x198) = *(unsigned int *)(param_1 + 0x68);
      *(unsigned int *)(param_1 + 0x19c) = *(unsigned int *)(param_1 + 0x6c);
      *(unsigned int *)(param_1 + 0x1a0) = *(unsigned int *)(param_1 + 0x70);
      *(unsigned int *)(param_1 + 0x1a4) = *(unsigned int *)(param_1 + 0x74);
      *(unsigned int *)(param_1 + 0x1a8) = *(unsigned int *)(param_1 + 0x78);
      *(unsigned int *)(param_1 + 0x1ac) = *(unsigned int *)(param_1 + 0x7c);
      *(unsigned int *)(param_1 + 0x1b0) = *(unsigned int *)(param_1 + 0x80);
      *(unsigned int *)(param_1 + 0x1b4) = *(unsigned int *)(param_1 + 0x84);
      *(unsigned int *)(param_1 + 0x1b8) = *(unsigned int *)(param_1 + 0x88);
      *(unsigned int *)(param_1 + 0x1bc) = *(unsigned int *)(param_1 + 0x8c);
      *(unsigned int *)(param_1 + 0x1c0) = *(unsigned int *)(param_1 + 0x90);
      *(unsigned int *)(param_1 + 0x1c4) = *(unsigned int *)(param_1 + 0x94);
      *(unsigned int *)(param_1 + 0x1c8) = *(unsigned int *)(param_1 + 0x98);
      *(unsigned int *)(param_1 + 0x1cc) = *(unsigned int *)(param_1 + 0x9c);
      *(unsigned int *)(param_1 + 0x1d0) = temp_v6;
      *(unsigned int *)(param_1 + 0x1d4) = temp_v2;
      nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x198,param_1 + 0x198);
      if (*param_1 != '\0') {
        FUN_0018af48(param_1 + 0x38,param_1 + 0x4b8,&uStack_30);
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
    }
  }
  return;
}
