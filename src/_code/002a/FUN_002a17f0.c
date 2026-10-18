/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a17f0` (_code @ 0x2a17f0, 0x1a bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */


void FUN_002a17f0(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_cr15; 2 native warning(s); review required */
  unsigned int in_cr15;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  temp_v3 = param_2[4];
  temp_v4 = param_2[6];
  temp_v5 = param_2[7];
  temp_v6 = param_2[8];
  temp_v7 = param_2[9];
  temp_v8 = param_2[10];
  temp_v9 = param_2[0xb];
  param_1[3] = *param_2;
  param_1[2] = temp_v0;
  param_1[1] = temp_v1;
  *param_1 = temp_v2;
  param_1[7] = temp_v3;
  param_1[5] = temp_v5;
  do {
    param_1[4] = temp_v4;
    param_1[0xb] = temp_v7;
    param_1[10] = temp_v6;
    param_1[9] = temp_v9;
    param_1[8] = temp_v8;
    coprocessor_storelong(0xf,in_cr15,param_1 + 0x1e);
    param_1[0xc] = temp_v5;
    param_1[0xb] = temp_v4;
    param_1[10] = temp_v7;
    param_1[0x10] = temp_v6;
    param_1[0xf] = temp_v9;
    param_1[0xe] = temp_v8;
    coprocessor_storelong(0xf,in_cr15,param_1 + 0x1e);
    param_1 = param_1 + 5;
  } while( 1 );
}
