/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379618` (_code @ 0x379618, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


void FUN_00379618(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  int temp_v12;
  
  temp_v0 = param_1[4];
  temp_v4 = (float)param_1[0x29];
  if (param_1[0x2b] < param_1[0x2a]) {
    temp_v5 = (float)VectorSignedToFloat(param_1[0x2b],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat(param_1[0x2a],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = ((temp_v4 - (float)param_1[0x28]) * temp_v5) / temp_v6 + (float)param_1[0x28];
  }
  temp_v5 = (float)param_1[0x1a];
  if (param_1[0x1c] < param_1[0x1b]) {
    temp_v8 = (float)VectorSignedToFloat(param_1[0x1c],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat(param_1[0x1b],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = ((temp_v5 - (float)param_1[0x19]) * temp_v8) / temp_v6 + (float)param_1[0x19];
  }
  temp_v6 = (float)param_1[0x1e];
  if (param_1[0x20] < param_1[0x1f]) {
    temp_v7 = (float)VectorSignedToFloat(param_1[0x20],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(param_1[0x1f],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = ((temp_v6 - (float)param_1[0x1d]) * temp_v7) / temp_v8 + (float)param_1[0x1d];
  }
  temp_v8 = (float)param_1[0x18] + (float)param_1[0xe] + (float)param_1[0x2d];
  temp_v7 = (float)param_1[0xf] + (float)param_1[0x34];
  temp_v10 = (float)param_1[0x17] * (float)param_1[0xd] * (float)param_1[0x2e];
  temp_v3 = (unsigned int)*(unsigned char *)((int)param_1 + 0x99);
  temp_v11 = *(float *)(temp_v0 + 0x30) + (float)param_1[0x11] + (float)param_1[0x2f];
  temp_v12 = param_1[0x30];
  temp_v4 = (float)param_1[0x16] *
          (float)param_1[0xc] *
          temp_v6 * temp_v5 * temp_v4 * *(float *)(temp_v0 + 0x2c) * (float)param_1[0x2c];
  if (temp_v3 == 0) {
    temp_v3 = *(unsigned int *)(temp_v0 + 0x34);
    temp_v12 = *(int *)(temp_v0 + 0x38);
    if (temp_v3 == 0) {
      temp_v3 = param_1[0x13];
      temp_v12 = param_1[0x12];
    }
  }
  temp_v9 = *(float *)(temp_v0 + 0x3c) + (float)param_1[0x31];
  temp_v5 = (float)param_1[0x33] + 0.0f + *(float *)(temp_v0 + 0x44);
  temp_v6 = (float)param_1[0x32] + 0.0f + *(float *)(temp_v0 + 0x40) + (float)param_1[0x10];
  temp_v1 = FUN_002baed8();
  temp_v0 = temp_v1;
  FUN_002b4f64(temp_v1,0xf);
  *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v0 + 4) = 8;
  temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  *(unsigned int *)(temp_v0 + 0x10) = temp_v2;
  *(float *)(temp_v0 + 0x14) = temp_v4;
  *(float *)(temp_v0 + 0x18) = temp_v10;
  *(float *)(temp_v0 + 0x24) = temp_v11;
  *(float *)(temp_v0 + 0x1c) = temp_v8;
  *(float *)(temp_v0 + 0x20) = temp_v7;
  *(unsigned int *)(temp_v0 + 0x28) = temp_v3;
  *(int *)(temp_v0 + 0x2c) = temp_v12;
  *(float *)(temp_v0 + 0x30) = temp_v9;
  *(float *)(temp_v0 + 0x34) = temp_v6;
  *(float *)(temp_v0 + 0x38) = temp_v5;
  FUN_002b4f40(temp_v1,temp_v0);
  return;
}
