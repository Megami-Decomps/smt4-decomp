/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1b78` (_code @ 0x2e1b78, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short FUN_00296cc8(unsigned int);


unsigned int FUN_002e1b78(int param_1)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 8);
  temp_v0 = FUN_00296cc8(0);
  *(unsigned short *)(temp_v1 + 0x98) = temp_v0;
  *(unsigned int *)(temp_v1 + 0x84) = 10;
  *(unsigned char *)(temp_v1 + 0x88) = 3;
  return 1;
}

} /* extern "C" */
