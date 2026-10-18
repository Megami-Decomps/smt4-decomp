/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121474` (_code @ 0x121474, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00121474(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  int temp_v4;
  float temp_v5;
  
  temp_v0 = *(unsigned char *)(param_1 + 0x8b);
  if (param_2 != 0) {
    if ((temp_v0 < 2) || ((temp_v0 != 2 && (temp_v0 == 3)))) {
      temp_v1 = *(int *)(param_1 + 0x80);
      temp_v2 = *(int *)(param_1 + 0x7c);
      if (temp_v1 >= temp_v2) {
        temp_v3 = *(float *)(param_1 + 0x78);
      }
      else {
        temp_v5 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = ((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x74)) * temp_v5) / temp_v3 +
                *(float *)(param_1 + 0x74);
      }
      temp_v5 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (int)(temp_v3 * temp_v5);
      if (temp_v4 < 1) {
        temp_v4 = 1;
      }
      if (temp_v1 >= temp_v2) {
        temp_v3 = *(float *)(param_1 + 0x78);
      }
      else {
        temp_v3 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = ((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x74)) * temp_v3) / temp_v5 +
                *(float *)(param_1 + 0x74);
      }
      *(float *)(param_1 + 0x74) = temp_v3;
      *(unsigned int *)(param_1 + 0x78) = 0;
      *(int *)(param_1 + 0x7c) = temp_v4;
      *(unsigned int *)(param_1 + 0x80) = 0;
      *(unsigned char *)(param_1 + 0x8c) = 0;
      *(unsigned char *)(param_1 + 0x8b) = 1;
    }
  }
  else if ((temp_v0 != 0) && ((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 3)) {
    temp_v1 = *(int *)(param_1 + 0x80);
    temp_v2 = *(int *)(param_1 + 0x7c);
    if (temp_v1 >= temp_v2) {
      temp_v3 = *(float *)(param_1 + 0x78);
    }
    else {
      temp_v5 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = ((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x74)) * temp_v5) / temp_v3 +
              *(float *)(param_1 + 0x74);
    }
    temp_v5 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (int)((1.0f - temp_v3) * temp_v5);
    if (temp_v4 < 1) {
      temp_v4 = 1;
    }
    if (temp_v1 >= temp_v2) {
      temp_v3 = *(float *)(param_1 + 0x78);
    }
    else {
      temp_v5 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = ((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x74)) * temp_v5) / temp_v3 +
              *(float *)(param_1 + 0x74);
    }
    *(float *)(param_1 + 0x74) = temp_v3;
    *(unsigned int *)(param_1 + 0x78) = 0x3f800000;
    *(int *)(param_1 + 0x7c) = temp_v4;
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(unsigned char *)(param_1 + 0x8b) = 3;
    *(unsigned char *)(param_1 + 0x8c) = 1;
    return;
  }
  return;
}
