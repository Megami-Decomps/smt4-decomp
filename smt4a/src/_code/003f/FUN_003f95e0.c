/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f95e0` (_code @ 0x3f95e0, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_003f95e0(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  
  temp_v1 = 0;
  do {
    temp_v0 = FUN_001834a4(0xc,temp_v1 + 0x8f);
    temp_v2 = param_1 + temp_v1 * 0x10;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x394) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x398) = temp_v3;
    temp_v0 = FUN_001834a4(0xc,temp_v1 + 0x94);
    temp_v1 = temp_v1 + 1;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x39c) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x3a0) = temp_v3;
  } while (temp_v1 < 5);
  temp_v1 = FUN_001834a4(0xc,0x61);
  temp_v0 = 0;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x36c) = temp_v3;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x370) = temp_v3;
  do {
    temp_v1 = FUN_001834a4(0xc,100 - temp_v0);
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v0 = temp_v0 + 1;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x374) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x378) = temp_v3;
  } while (temp_v0 < 3);
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x390) = *(unsigned int *)(param_1 + 0x388);
  *(float *)(param_1 + 0x38c) =
       (*(float *)(param_1 + 900) - *(float *)(param_1 + 0x37c)) + *(float *)(param_1 + 900);
  do {
    temp_v0 = FUN_001834a4(0xc,temp_v1 + 0x65);
    temp_v2 = param_1 + temp_v1 * 8;
    temp_v1 = temp_v1 + 1;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x3e4) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 1000) = temp_v3;
  } while (temp_v1 < 4);
  temp_v1 = FUN_001834a4(0xc,0x6a);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x408) = temp_v3;
  temp_v1 = FUN_001834a4(0xc,0x69);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x404) = temp_v3;
  FUN_002e6354(param_1,0x360);
  *(unsigned int *)(param_1 + 0x364) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x360) = 0;
  *(unsigned int *)(param_1 + 0x368) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x414) = 0;
  *(unsigned int *)(param_1 + 0x418) = 0;
  *(unsigned int *)(param_1 + 0x41c) = 0;
  *(unsigned int *)(param_1 + 0x410) = 0x40800000;
  *(unsigned int *)(param_1 + 0x40c) = 4;
  return;
}
