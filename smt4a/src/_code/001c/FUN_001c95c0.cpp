/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c95c0` (_code @ 0x1c95c0, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cefe0(int, int);
int VectorFloatToUnsigned(double, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001cefe0. */


void FUN_001c95c0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    temp_v1 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
    temp_v4 = 1.0f;
    temp_v0 = 0;
    temp_v5 = *(float *)(temp_v1 + 0xb4);
    temp_v3 = 0.0f;
    if (*(int *)(temp_v1 + 0xc4) != 0) {
      temp_v0 = *(int *)(temp_v1 + 0xc4) + temp_v1 + 0xc4;
    }
    temp_v7 = temp_v4;
    if ((temp_v5 <= 1.0f) && (temp_v7 = temp_v5, temp_v5 < 0.0f)) {
      temp_v7 = temp_v3;
    }
    temp_v6 = VectorFloatToUnsigned(temp_v7 * 255.0f + 0.5f,3);
    temp_v7 = *(float *)(temp_v1 + 0xb8);
    temp_v5 = temp_v4;
    if ((temp_v7 <= 1.0f) && (temp_v5 = temp_v7, temp_v7 < 0.0f)) {
      temp_v5 = temp_v3;
    }
    temp_v8 = VectorFloatToUnsigned(temp_v5 * 255.0f + 0.5f,3);
    temp_v7 = *(float *)(temp_v1 + 0xbc);
    temp_v5 = temp_v4;
    if ((temp_v7 <= 1.0f) && (temp_v5 = temp_v7, temp_v7 < 0.0f)) {
      temp_v5 = temp_v3;
    }
    temp_v9 = VectorFloatToUnsigned(temp_v5 * 255.0f + 0.5f,3);
    temp_v5 = *(float *)(temp_v1 + 0xc0);
    if ((temp_v5 <= 1.0f) && (temp_v4 = temp_v3, 0.0f <= temp_v5)) {
      temp_v4 = temp_v5;
    }
    VectorFloatToUnsigned(temp_v4 * 255.0f + 0.5f,3);
    temp_v2 = 0;
    if ((*(unsigned int *)(temp_v1 + 0x18) & 2) != 0) {
      temp_v2 = 0x10000;
    }
    DAT_005b40e0[3] = 0xf00e1;
    *DAT_005b40e0 = temp_v2;
    DAT_005b40e0[1] = 0x400e0;
    DAT_005b40e0[2] = ((temp_v8 & 0xff) << 8) | (temp_v6 & 0xff) | ((temp_v9 & 0xff) << 0x10);
    DAT_005b40e0 = DAT_005b40e0 + 4;
    FUN_001cefe0(temp_v0,0x17);
    return;
  }
  return;
}

} /* extern "C" */
