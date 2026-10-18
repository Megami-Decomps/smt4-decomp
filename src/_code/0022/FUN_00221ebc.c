/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221ebc` (_code @ 0x221ebc, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002c0ac8(unsigned int);


unsigned int FUN_00221ebc(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_002c0ac8(temp_v0);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v2 + 0x24) = 0x3f800000;
    temp_v3 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(temp_v2 + 0x28) = -1.0f / temp_v3;
  }
  else {
    *(unsigned int *)(temp_v2 + 0x24) = 0;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
  }
  return 1;
}
