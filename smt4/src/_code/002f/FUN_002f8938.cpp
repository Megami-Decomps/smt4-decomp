/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8938` (_code @ 0x2f8938, 0x240 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_002f8938(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  float in_s3;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  
  temp_v2 = 0;
  temp_v0 = (*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x164)) >> 2;
  if (0 < temp_v0) {
    temp_v4 = 1.0f;
    temp_v3 = 0.0f;
    do {
      temp_v1 = *(int *)(*(int *)(param_1 + 0x164) + temp_v2 * 4);
      if (*(int *)(temp_v1 + 0x24) >= 1) {
        temp_v1 = **(int **)(temp_v1 + 0x10);
      }
      else {
        temp_v1 = 0;
      }
      *(unsigned int *)(temp_v1 + 0x44) = in_s0;
      *(unsigned int *)(temp_v1 + 0x48) = in_s1;
      *(unsigned int *)(temp_v1 + 0x4c) = in_s2;
      *(float *)(temp_v1 + 0x50) = in_s3;
      temp_v8 = *(float *)(temp_v1 + 0x44);
      temp_v10 = temp_v4;
      if (((int)temp_v8 < 0x3f800001) && (temp_v10 = temp_v8, temp_v8 <= 0.0f)) {
        temp_v10 = temp_v3;
      }
      temp_v5 = *(float *)(temp_v1 + 0x48);
      temp_v8 = temp_v5;
      if ((int)temp_v5 >= 0x3f800001) {
        temp_v8 = temp_v4;
      }
      temp_v9 = VectorFloatToUnsigned(temp_v10 * 255.0f + 0.5f,3);
      if (((int)temp_v5 < 0x3f800001) && (temp_v8 <= 0.0f)) {
        temp_v8 = temp_v3;
      }
      temp_v5 = *(float *)(temp_v1 + 0x4c);
      temp_v10 = temp_v5;
      if ((int)temp_v5 >= 0x3f800001) {
        temp_v10 = temp_v4;
      }
      temp_v6 = VectorFloatToUnsigned(temp_v8 * 255.0f + 0.5f,3);
      if (((int)temp_v5 < 0x3f800001) && (temp_v10 <= 0.0f)) {
        temp_v10 = temp_v3;
      }
      temp_v8 = in_s3;
      if ((int)in_s3 >= 0x3f800001) {
        temp_v8 = temp_v4;
      }
      temp_v11 = VectorFloatToUnsigned(temp_v10 * 255.0f + 0.5f,3);
      if (((int)in_s3 < 0x3f800001) && (temp_v8 <= 0.0f)) {
        temp_v8 = temp_v3;
      }
      temp_v7 = VectorFloatToUnsigned(temp_v8 * 255.0f + 0.5f,3);
      *(unsigned int *)(temp_v1 + 0xdc) =
           (temp_v7 << 0x18) | ((temp_v11 & 0xff) << 0x10) | ((temp_v6 & 0xff) << 8) | (temp_v9 & 0xff);
      *(unsigned int *)(temp_v1 + 0x74) = in_s0;
      *(unsigned int *)(temp_v1 + 0x78) = in_s1;
      *(unsigned int *)(temp_v1 + 0x7c) = in_s2;
      *(float *)(temp_v1 + 0x80) = in_s3;
      temp_v8 = *(float *)(temp_v1 + 0x74);
      temp_v10 = temp_v4;
      if (((int)temp_v8 < 0x3f800001) && (temp_v10 = temp_v8, temp_v8 <= 0.0f)) {
        temp_v10 = temp_v3;
      }
      temp_v5 = *(float *)(temp_v1 + 0x78);
      temp_v8 = temp_v5;
      if ((int)temp_v5 >= 0x3f800001) {
        temp_v8 = temp_v4;
      }
      temp_v9 = VectorFloatToUnsigned(temp_v10 * 255.0f + 0.5f,3);
      if (((int)temp_v5 < 0x3f800001) && (temp_v8 <= 0.0f)) {
        temp_v8 = temp_v3;
      }
      temp_v5 = *(float *)(temp_v1 + 0x7c);
      temp_v10 = temp_v5;
      if ((int)temp_v5 >= 0x3f800001) {
        temp_v10 = temp_v4;
      }
      temp_v6 = VectorFloatToUnsigned(temp_v8 * 255.0f + 0.5f,3);
      if (((int)temp_v5 < 0x3f800001) && (temp_v10 <= 0.0f)) {
        temp_v10 = temp_v3;
      }
      temp_v8 = in_s3;
      if ((int)in_s3 >= 0x3f800001) {
        temp_v8 = temp_v4;
      }
      temp_v11 = VectorFloatToUnsigned(temp_v10 * 255.0f + 0.5f,3);
      if (((int)in_s3 < 0x3f800001) && (temp_v8 <= 0.0f)) {
        temp_v8 = temp_v3;
      }
      temp_v2 = temp_v2 + 1;
      temp_v7 = VectorFloatToUnsigned(temp_v8 * 255.0f + 0.5f,3);
      *(unsigned int *)(temp_v1 + 0xe8) =
           (temp_v7 << 0x18) | ((temp_v11 & 0xff) << 0x10) | ((temp_v6 & 0xff) << 8) | (temp_v9 & 0xff);
    } while (temp_v2 < temp_v0);
  }
  return;
}

} /* extern "C" */
