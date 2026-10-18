/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257e74` (_code @ 0x257e74, 0x228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00296d6c. */


void FUN_00257e74(float *param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v1 = (int)*(short *)(param_1 + 4);
  temp_v4 = (int)*(short *)((int)param_1 + 0x12);
  if ((temp_v1 != -1) && (temp_v1 <= temp_v4)) {
    if (param_1 != (float *)0x0) {
      *param_1 = 0.0f;
      param_1[1] = 0.0f;
      param_1[2] = 0.0f;
      param_1[3] = 0.0f;
      param_1[4] = 0.0f;
    }
    return;
  }
  temp_v11 = 0.0f;
  if (temp_v4 < 0) {
    *(short *)((int)param_1 + 0x12) = *(short *)((int)param_1 + 0x12) + 1;
    param_1[2] = 0.0f;
    param_1[3] = 0.0f;
    return;
  }
  temp_v6 = SCARRY4(temp_v1,1);
  temp_v3 = temp_v1 + 1;
  temp_v9 = *param_1;
  temp_v12 = param_1[1];
  if (temp_v1 != -1) {
    temp_v6 = SBORROW4(temp_v1,3);
    temp_v3 = temp_v1 - 3;
  }
  if (((temp_v1 != -1 && temp_v1 != 3) && temp_v3 < 0 == temp_v6) && (temp_v1 = temp_v1 - temp_v4, temp_v1 < 4)) {
    temp_v10 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = temp_v10 * temp_v9 * 0.25f;
    temp_v12 = temp_v8 * temp_v12 * 0.25f;
  }
  temp_v13 = 0.5f;
  temp_v8 = 100.0f;
  temp_v2 = FUN_00296d6c((int)(temp_v9 * 0.5f * 100.0f),(int)(temp_v9 * 100.0f));
  temp_v10 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = FUN_00296d6c((int)(temp_v12 * temp_v13 * temp_v8),(int)(temp_v12 * temp_v8));
  temp_v10 = temp_v10 * 0.01f;
  temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = temp_v9 * 0.01f;
  temp_v1 = FUN_00296d6c(0,1);
  temp_v4 = temp_v1 * 2 - 1;
  temp_v1 = FUN_00296d6c(0,1);
  temp_v8 = param_1[2];
  temp_v1 = temp_v1 * 2 - 1;
  temp_v12 = param_1[3];
  if (temp_v11 < temp_v8) {
    temp_v2 = 1;
  }
  else {
    temp_v2 = 0xffffffff;
  }
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 == temp_v11) << 0x1e);
  if (temp_v11 < temp_v12) {
    temp_v5 = 1;
  }
  else {
    temp_v5 = 0xffffffff;
  }
  temp_v6 = 0;
  if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 == temp_v11) << 0x1e);
    temp_v6 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  }
  if (temp_v6) {
    temp_v12 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v0 >> 0x16) & 3);
    param_1[2] = temp_v10 * temp_v11;
    param_1[3] = temp_v9 * temp_v12;
  }
  else {
    temp_v7 = (temp_v0 & 0xfffffff) | ((unsigned int)(temp_v8 == temp_v11) << 0x1e);
    if ((!romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0)) &&
       ((temp_v7 = (temp_v0 & 0xfffffff) | ((unsigned int)(temp_v12 == temp_v11) << 0x1e), romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0) ||
        (temp_v3 = FUN_00296d6c(0,1), temp_v3 != 0)))) {
      temp_v12 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(temp_v7 >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v7 >> 0x16) & 3);
      param_1[2] = temp_v10 * temp_v11;
      param_1[3] = temp_v9 * temp_v12;
    }
    else {
      temp_v12 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v7 >> 0x16) & 3);
      param_1[2] = temp_v10 * temp_v11;
      param_1[3] = temp_v9 * temp_v12;
    }
  }
  if (*(short *)((int)param_1 + 0x12) < 0x7ffe) {
    *(short *)((int)param_1 + 0x12) = *(short *)((int)param_1 + 0x12) + 1;
  }
  return;
}
