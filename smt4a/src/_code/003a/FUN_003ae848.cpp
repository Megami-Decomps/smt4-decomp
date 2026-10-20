/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae848` (_code @ 0x3ae848, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018206c(unsigned int, unsigned int);


unsigned char FUN_003ae848(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0018206c(0x24,0);
  return temp_v0 != 0;
}

} /* extern "C" */
