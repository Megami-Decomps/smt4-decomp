/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467374` (_code @ 0x467374, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001afe40. */
/* Supplied declaration required: FUN_00467840. */


void FUN_00467374(unsigned int *param_1,unsigned int *param_2,float *param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  
  FUN_00467840(param_3);
  if (((unsigned int)param_3[3] & 1) != 0) {
    in_s0 = *param_3;
  }
  temp_v2 = VectorFloatToUnsigned(in_s0,3);
  temp_v3 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = in_s0 - temp_v3;
  if (temp_v3 == 0.0f) {
    temp_v13 = param_3[temp_v2 * 5 + 4];
    temp_v14 = param_3[temp_v2 * 5 + 5];
    temp_v15 = param_3[temp_v2 * 5 + 6];
    temp_v16 = param_3[temp_v2 * 5 + 7];
    FUN_001afe40(&temp_v4,&temp_v13,1);
    *param_2 = (unsigned int)param_3[temp_v2 * 5 + 8] | *param_2;
  }
  else {
    if (param_3[1] == in_s0) {
      temp_v2 = temp_v2 + 1;
      temp_v13 = param_3[temp_v2 * 5 + 4];
      temp_v14 = param_3[temp_v2 * 5 + 5];
      temp_v15 = param_3[temp_v2 * 5 + 6];
      temp_v16 = param_3[temp_v2 * 5 + 7];
      FUN_001afe40(&temp_v4,&temp_v13,1);
      temp_v0 = (unsigned int)param_3[temp_v2 * 5 + 8] | *param_2;
    }
    else {
      in_s0 = in_s0 + 1.0f;
      FUN_00467840(param_3);
      temp_v1 = VectorFloatToUnsigned(in_s0,3);
      temp_v13 = param_3[temp_v2 * 5 + 4];
      temp_v13 = temp_v13 + temp_v3 * (param_3[temp_v1 * 5 + 4] - temp_v13);
      temp_v14 = param_3[temp_v2 * 5 + 5] + temp_v3 * (param_3[temp_v1 * 5 + 5] - param_3[temp_v2 * 5 + 5]);
      temp_v15 = param_3[temp_v2 * 5 + 6] + temp_v3 * (param_3[temp_v1 * 5 + 6] - param_3[temp_v2 * 5 + 6]);
      temp_v16 = param_3[temp_v2 * 5 + 7] + temp_v3 * (param_3[temp_v1 * 5 + 7] - param_3[temp_v2 * 5 + 7]);
      FUN_001afe40(&temp_v4,&temp_v13,1);
      temp_v0 = ((unsigned int)param_3[temp_v2 * 5 + 8] & (unsigned int)param_3[temp_v1 * 5 + 8]) | *param_2;
    }
    *param_2 = temp_v0;
  }
  *param_1 = temp_v4;
  param_1[1] = temp_v5;
  param_1[2] = temp_v6;
  param_1[4] = temp_v7;
  param_1[5] = temp_v8;
  param_1[6] = temp_v9;
  param_1[8] = temp_v10;
  param_1[9] = temp_v11;
  param_1[10] = temp_v12;
  return;
}
