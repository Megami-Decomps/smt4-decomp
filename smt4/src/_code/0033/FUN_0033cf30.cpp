/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033cf30` (_code @ 0x33cf30, 0x1b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf4f8(...);
int FUN_002c4938(...);
int VectorSignedToFloat(...);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_0033cf30(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002bf4f8(0x14,temp_v1 + 0x59);
    temp_v2 = param_1 + temp_v1 * 0x10;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x328) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x32c) = temp_v3;
    temp_v0 = FUN_002bf4f8(0x14,temp_v1 + 0x5d);
    temp_v1 = temp_v1 + 1;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x330) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x334) = temp_v3;
  } while (temp_v1 < 4);
  temp_v1 = FUN_002bf4f8(0x14,0x61);
  temp_v0 = 0;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x300) = temp_v3;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x304) = temp_v3;
  do {
    temp_v1 = FUN_002bf4f8(0x14,100 - temp_v0);
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v0 = temp_v0 + 1;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x308) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x30c) = temp_v3;
  } while (temp_v0 < 3);
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x324) = *(unsigned int *)(param_1 + 0x31c);
  *(float *)(param_1 + 800) =
       (*(float *)(param_1 + 0x318) - *(float *)(param_1 + 0x310)) + *(float *)(param_1 + 0x318);
  do {
    temp_v0 = FUN_002bf4f8(0x14,temp_v1 + 0x65);
    temp_v2 = param_1 + temp_v1 * 8;
    temp_v1 = temp_v1 + 1;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x368) = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v2 + 0x36c) = temp_v3;
  } while (temp_v1 < 4);
  temp_v1 = FUN_002bf4f8(0x14,0x6a);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x38c) = temp_v3;
  temp_v1 = FUN_002bf4f8(0x14,0x69);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x388) = temp_v3;
  FUN_002c4938(param_1,0x2f4);
  *(unsigned int *)(param_1 + 0x2f8) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x2f4) = 0;
  *(unsigned int *)(param_1 + 0x2fc) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x398) = 0;
  *(unsigned int *)(param_1 + 0x39c) = 0;
  *(unsigned int *)(param_1 + 0x3a0) = 0;
  *(unsigned int *)(param_1 + 0x394) = 0x40800000;
  *(unsigned int *)(param_1 + 0x390) = 4;
  return;
}

} /* extern "C" */
