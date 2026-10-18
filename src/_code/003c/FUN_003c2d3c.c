/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2d3c` (_code @ 0x3c2d3c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002b902c(unsigned int);


unsigned int FUN_003c2d3c(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b902c(3);
  if (param_1 != 0) {
    temp_v1 = FUN_002b902c(0xc);
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}
