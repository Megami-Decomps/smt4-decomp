/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2ffc` (_code @ 0x3e2ffc, 0x6b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00374240. */


void FUN_003e2ffc(int param_1,unsigned int param_2,float *param_3)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int temp_v2;
  unsigned int unaff_r5;
  int temp_v3;
  unsigned int unaff_r6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  float in_s0;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x18) + 0x10))();
  temp_v4 = 0;
  temp_v10 = 0.0f;
  temp_v11 = 1.0f;
  temp_v3 = 0;
  temp_v1 = 0;
  temp_v9 = 0;
  temp_v8 = 0;
  temp_v2 = 0;
  temp_v5 = 0;
  temp_v7 = 0;
  if ((param_2 & 0x4000) != 0) {
    temp_v6 = *(int *)(temp_v0 + 0xc);
    temp_v4 = *(unsigned int *)(temp_v0 + 0x14);
    if (temp_v6 != 0x8057) {
      if (temp_v6 < 0x8057) {
        if (temp_v6 != 0x6050) {
          if (temp_v6 == 0x8056) {
            temp_v15 = *param_3;
            temp_v1 = 0x10;
            temp_v12 = temp_v11;
            if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
              temp_v12 = temp_v15;
            }
            temp_v15 = param_3[1];
            temp_v5 = VectorFloatToUnsigned(temp_v12 * 15.0f + 0.5f,3);
            temp_v12 = temp_v11;
            if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
              temp_v12 = temp_v15;
            }
            temp_v8 = VectorFloatToUnsigned(temp_v12 * 15.0f + 0.5f,3);
            temp_v15 = param_3[2];
            temp_v12 = temp_v11;
            if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
              temp_v12 = temp_v10;
            }
            temp_v16 = VectorFloatToUnsigned(temp_v12 * 15.0f + 0.5f,3);
            temp_v15 = param_3[3];
            temp_v12 = temp_v11;
            if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
              temp_v12 = temp_v15;
            }
            temp_v14 = VectorFloatToUnsigned(temp_v12 * 15.0f + 0.5f,3);
            temp_v8 = (temp_v14 & 0xff) | ((temp_v16 & 0xff) << 4) | ((temp_v8 & 0xff) << 8);
            temp_v5 = (temp_v5 & 0xff) << 0xc;
            temp_v8 = temp_v8 | (temp_v5 & 0xffff) | ((temp_v8 | temp_v5) << 0x10);
          }
        }
        else {
          temp_v15 = *param_3;
          temp_v12 = temp_v11;
          if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
            temp_v12 = temp_v10;
          }
          temp_v15 = param_3[1];
          temp_v5 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3) & 0xff;
          temp_v12 = temp_v11;
          if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
            temp_v12 = temp_v10;
          }
          temp_v8 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
          temp_v15 = param_3[2];
          temp_v8 = temp_v8 & 0xff;
          temp_v12 = temp_v11;
          if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
            temp_v12 = temp_v15;
          }
          temp_v16 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
          temp_v13 = param_3[3];
          temp_v16 = temp_v16 & 0xff;
          temp_v12 = temp_v11;
          if ((temp_v13 <= 1.0f) && (temp_v12 = temp_v13, temp_v15 = temp_v10, temp_v13 < 0.0f)) {
            temp_v12 = temp_v15;
          }
          temp_v1 = 0x20;
          temp_v14 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
          temp_v8 = (temp_v14 & 0xff) | (temp_v16 << 8) | (temp_v8 << 0x10) | (temp_v5 << 0x18);
        }
      }
      else if (temp_v6 != 0x8058) {
        if (temp_v6 == 0x8d62) {
          temp_v15 = *param_3;
          temp_v1 = 0x10;
          temp_v12 = temp_v11;
          if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
            temp_v12 = temp_v10;
          }
          temp_v15 = param_3[1];
          temp_v5 = VectorFloatToUnsigned(temp_v12 * 31.0f + 0.5f,3);
          temp_v12 = temp_v11;
          if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
            temp_v12 = temp_v10;
          }
          temp_v8 = VectorFloatToUnsigned(temp_v12 * 63.0f + 0.5f,3);
          temp_v15 = param_3[2];
          temp_v12 = temp_v11;
          if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
            temp_v12 = temp_v15;
          }
          temp_v16 = VectorFloatToUnsigned(temp_v12 * 31.0f + 0.5f,3);
          temp_v8 = (temp_v16 & 0xff) | ((temp_v8 & 0xff) << 5);
          temp_v5 = (temp_v5 & 0xff) << 0xb;
          temp_v8 = temp_v8 | (temp_v5 & 0xffff) | ((temp_v8 | temp_v5) << 0x10);
        }
      }
      else {
        temp_v15 = *param_3;
        temp_v12 = temp_v11;
        if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
          temp_v12 = temp_v10;
        }
        temp_v15 = param_3[1];
        temp_v5 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3) & 0xff;
        temp_v12 = temp_v11;
        if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
          temp_v12 = temp_v15;
        }
        temp_v8 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
        temp_v15 = param_3[2];
        temp_v8 = temp_v8 & 0xff;
        temp_v12 = temp_v11;
        if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
          temp_v12 = temp_v10;
        }
        temp_v16 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
        temp_v12 = param_3[3];
        temp_v16 = temp_v16 & 0xff;
        temp_v15 = temp_v11;
        if (1.0f >= temp_v12) {
          if (temp_v12 < 0.0f) {
            temp_v12 = temp_v10;
          }
        }
        else {
          temp_v12 = temp_v15;
        }
        temp_v1 = 0x20;
        temp_v14 = VectorFloatToUnsigned(temp_v12 * 255.0f + 0.5f,3);
        temp_v8 = (temp_v14 & 0xff) | (temp_v16 << 8) | (temp_v8 << 0x10) | (temp_v5 << 0x18);
      }
    }
    else {
      temp_v15 = *param_3;
      temp_v1 = 0x10;
      temp_v12 = temp_v11;
      if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
        temp_v12 = temp_v10;
      }
      temp_v15 = param_3[1];
      temp_v5 = VectorFloatToUnsigned(temp_v12 * 31.0f + 0.5f,3);
      temp_v12 = temp_v11;
      if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
        temp_v12 = temp_v15;
      }
      temp_v8 = VectorFloatToUnsigned(temp_v12 * 31.0f + 0.5f,3);
      temp_v15 = param_3[2];
      temp_v12 = temp_v11;
      if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v15, temp_v15 < 0.0f)) {
        temp_v12 = temp_v10;
      }
      temp_v16 = VectorFloatToUnsigned(temp_v12 * 31.0f + 0.5f,3);
      temp_v15 = param_3[3];
      temp_v12 = temp_v11;
      if ((temp_v15 <= 1.0f) && (temp_v12 = temp_v10, 0.0f <= temp_v15)) {
        temp_v12 = temp_v15;
      }
      temp_v14 = VectorFloatToUnsigned(temp_v12 + 0.5f,3);
      temp_v8 = (temp_v14 & 0xff) | ((temp_v16 & 0xff) << 1) | ((temp_v8 & 0xff) << 6);
      temp_v5 = (temp_v5 & 0xff) << 0xb;
      temp_v8 = temp_v8 | (temp_v5 & 0xffff) | ((temp_v8 | temp_v5) << 0x10);
    }
    temp_v5 = (unsigned int)(*(int *)(temp_v0 + 4) * *(int *)(temp_v0 + 8) * temp_v1) >> 3;
  }
  if ((param_2 & 0x100) != 0) {
    temp_v3 = *(int *)(temp_v0 + 0x18);
    if (temp_v3 != 0) {
      temp_v6 = *(int *)(temp_v0 + 0x10);
      if (temp_v6 != 0x81a5) {
        if (temp_v6 != 0x81a6) {
          if (temp_v6 == 0x88f0) {
            temp_v9 = 0x20;
            if ((in_s0 <= 1.0f) && (temp_v11 = temp_v10, 0.0f <= in_s0)) {
              temp_v11 = in_s0;
            }
            temp_v2 = VectorFloatToUnsigned(temp_v11 * 16777215.0f,3);
          }
        }
        else {
          temp_v9 = 0x18;
          if ((in_s0 <= 1.0f) && (temp_v11 = temp_v10, 0.0f <= in_s0)) {
            temp_v11 = in_s0;
          }
          temp_v2 = VectorFloatToUnsigned(temp_v11 * 16777215.0f,3);
        }
      }
      else {
        temp_v9 = 0x10;
        if ((in_s0 <= 1.0f) && (temp_v11 = temp_v10, 0.0f <= in_s0)) {
          temp_v11 = in_s0;
        }
        temp_v7 = VectorFloatToUnsigned(temp_v11 * 65535.0f,3);
        temp_v2 = (temp_v7 & 0xffff) | (temp_v7 << 0x10);
      }
    }
    temp_v7 = (unsigned int)(*(int *)(temp_v0 + 4) * *(int *)(temp_v0 + 8) * temp_v9) >> 3;
  }
  FUN_00374240(temp_v4,temp_v5,temp_v8,temp_v1,temp_v3,temp_v7,temp_v2,temp_v9,unaff_r4,unaff_r5,unaff_r6);
  return;
}
