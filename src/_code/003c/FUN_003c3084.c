/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3084` (_code @ 0x3c3084, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_003c3084(int param_1,unsigned int *param_2,int *param_3,unsigned int *param_4,int *param_5)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
  temp_v0 = *(int *)(param_1 + 0x3c);
  temp_v1 = *(int *)(param_1 + 0x38);
  temp_v2 = *(unsigned int *)(param_1 + 0x34);
  temp_v8 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = *(unsigned int *)(param_1 + 0x40);
  temp_v4 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  *param_2 = 0;
  temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v5 * (temp_v6 / temp_v4);
  temp_v4 = (float)VectorSignedToFloat(temp_v0 - temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((int)temp_v5 < 0x41400000) {
    temp_v5 = 12.0f;
  }
  *param_3 = (int)((temp_v8 - temp_v5) * (temp_v3 / temp_v4));
  *param_4 = *(unsigned int *)(param_1 + 0x30);
  *param_5 = (int)temp_v5;
  return;
}
