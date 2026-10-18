/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_WorldMatrixUpdater_CalculateWorldBasic` (_code @ 0x504abc, 0x37c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00504abc_arg3 fn_00504abc_arg3;
struct fn_00504abc_arg3 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    undefined4 field_0x2c; /* +0x2c */
    float field_0x30; /* +0x30 */
    float field_0x34; /* +0x34 */
    float field_0x38; /* +0x38 */
    uint field_0x3c; /* +0x3c */
};

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

/* Supplied declaration required: nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultTranslateAsm. */


void nw_gfx_WorldMatrixUpdater_CalculateWorldBasic
               (unsigned int param_1,float *param_2,float *param_3,fn_00504abc_arg3 *param_4,
               float *param_5,int param_6)

{
/* irregular: 3 native warning(s); review required */
  float *pfVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  temp_v0 = ~*(unsigned int *)(param_6 + 0x3c) & 0x200;
  if ((param_4->field_0x3c & 0x60) != 0) {
    if (temp_v0 != 0) {
      *param_2 = *param_5 * *(float *)(param_6 + 0x30);
      param_2[4] = param_5[4] * *(float *)(param_6 + 0x30);
      param_2[8] = param_5[8] * *(float *)(param_6 + 0x30);
      param_2[1] = param_5[1] * *(float *)(param_6 + 0x34);
      param_2[5] = param_5[5] * *(float *)(param_6 + 0x34);
      param_2[9] = param_5[9] * *(float *)(param_6 + 0x34);
      param_2[2] = param_5[2] * *(float *)(param_6 + 0x38);
      param_2[6] = param_5[6] * *(float *)(param_6 + 0x38);
      param_2[10] = param_5[10] * *(float *)(param_6 + 0x38);
      param_2[3] = param_5[3];
      param_2[7] = param_5[7];
      param_2[0xb] = param_5[0xb];
    }
    else {
      nn_math_ARMv6_MTX34CopyAsm(param_2);
    }
  }
  else if ((~param_4->field_0x3c & 0x80) != 0) {
    if (temp_v0 != 0) {
      temp_v1 = param_4->field_0xc;
      uStack_24 = param_4->field_0x1c;
      uStack_20 = param_4->field_0x2c;
      *param_2 = *param_5 * *(float *)(param_6 + 0x30);
      param_2[4] = param_5[4] * *(float *)(param_6 + 0x30);
      param_2[8] = param_5[8] * *(float *)(param_6 + 0x30);
      param_2[1] = param_5[1] * *(float *)(param_6 + 0x34);
      param_2[5] = param_5[5] * *(float *)(param_6 + 0x34);
      param_2[9] = param_5[9] * *(float *)(param_6 + 0x34);
      param_2[2] = param_5[2] * *(float *)(param_6 + 0x38);
      param_2[6] = param_5[6] * *(float *)(param_6 + 0x38);
      param_2[10] = param_5[10] * *(float *)(param_6 + 0x38);
      param_2[3] = param_5[3];
      param_2[7] = param_5[7];
      param_2[0xb] = param_5[0xb];
      nn_math_ARMv6_MTX34MultTranslateAsm(param_2,param_2,&temp_v1);
      nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34(param_2,param_2,param_4);
    }
    else {
      temp_v1 = param_4->field_0xc;
      uStack_24 = param_4->field_0x1c;
      uStack_20 = param_4->field_0x2c;
      nn_math_ARMv6_MTX34MultTranslateAsm(param_2,param_5,&temp_v1);
      nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34(param_2,param_2,param_4);
    }
  }
  else {
    if (temp_v0 != 0) {
      temp_v1 = param_4->field_0xc;
      uStack_24 = param_4->field_0x1c;
      uStack_20 = param_4->field_0x2c;
      *param_2 = *param_5 * *(float *)(param_6 + 0x30);
      param_2[4] = param_5[4] * *(float *)(param_6 + 0x30);
      param_2[8] = param_5[8] * *(float *)(param_6 + 0x30);
      param_2[1] = param_5[1] * *(float *)(param_6 + 0x34);
      param_2[5] = param_5[5] * *(float *)(param_6 + 0x34);
      param_2[9] = param_5[9] * *(float *)(param_6 + 0x34);
      param_2[2] = param_5[2] * *(float *)(param_6 + 0x38);
      param_2[6] = param_5[6] * *(float *)(param_6 + 0x38);
      param_2[10] = param_5[10] * *(float *)(param_6 + 0x38);
      param_2[3] = param_5[3];
      param_2[7] = param_5[7];
      param_2[0xb] = param_5[0xb];
      pfVar1 = param_2;
    }
    else {
      temp_v1 = param_4->field_0xc;
      uStack_24 = param_4->field_0x1c;
      uStack_20 = param_4->field_0x2c;
      pfVar1 = param_5;
    }
    nn_math_ARMv6_MTX34MultTranslateAsm(param_2,pfVar1,&temp_v1);
  }
  if ((~(unsigned int)param_5[0xf] & 0x200) != 0) {
    *param_3 = param_5[0xc] * param_4->field_0x30;
    param_3[1] = param_5[0xd] * param_4->field_0x34;
    param_3[2] = param_5[0xe] * param_4->field_0x38;
    return;
  }
  *param_3 = param_4->field_0x30;
  param_3[1] = param_4->field_0x34;
  param_3[2] = param_4->field_0x38;
  return;
}
