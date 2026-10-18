/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cfd5c` (_code @ 0x4cfd5c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001656a0(unsigned int);


unsigned int FUN_004cfd5c(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001656a0(5);
  if (param_1 != 0) {
    temp_v1 = FUN_001656a0(0xe);
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}
