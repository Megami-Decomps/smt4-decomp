/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00210ce0` (_code @ 0x210ce0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */

extern int FUN_00296f4c(unsigned int, unsigned int);


unsigned char FUN_00210ce0(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00296f4c(*(unsigned int *)(DAT_0043da2c + 0x560),param_1);
  return temp_v0 != 0;
}
