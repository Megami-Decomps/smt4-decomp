/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e6d4` (_code @ 0x35e6d4, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int aeabi_idivmod(int, int);


unsigned char FUN_0035e6d4(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  
  temp_v7 = param_1[0xc];
  temp_v2 = param_1[0xd] + 1;
  param_1[0xd] = temp_v2;
  temp_v3 = param_1[3];
  temp_v6 = param_1[5];
  temp_v5 = temp_v7 - param_1[0xb];
  temp_v0 = aeabi_idivmod(temp_v6 - temp_v3,temp_v5);
  temp_v4 = param_1[6];
  temp_v8 = param_1[4];
  temp_v1 = aeabi_idivmod(temp_v4 - temp_v8,temp_v5);
  temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = temp_v1 * temp_v2 + temp_v8;
  temp_v0 = temp_v0 * temp_v2 + temp_v3;
  temp_v9 = (float)param_1[7] + (((float)param_1[8] - (float)param_1[7]) / temp_v10) * temp_v9;
  if (temp_v2 >= temp_v7) {
    temp_v1 = temp_v4;
    temp_v0 = temp_v6;
    temp_v9 = (float)param_1[8];
  }
  param_1[1] = temp_v1;
  *param_1 = temp_v0;
  param_1[2] = (int)temp_v9;
  return temp_v2 < temp_v7;
}

} /* extern "C" */
