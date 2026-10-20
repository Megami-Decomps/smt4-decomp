/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ece50` (_code @ 0x3ece50, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_004d87e4(unsigned int);


unsigned char FUN_003ece50(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_004d87e4(*(unsigned int *)(param_1 + 0x22bc));
  return temp_v0 != 0;
}

} /* extern "C" */
