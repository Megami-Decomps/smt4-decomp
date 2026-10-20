/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f78c` (_code @ 0x47f78c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int lcgRandomRange(unsigned int);


unsigned char FUN_0047f78c(void)

{
  int temp_v0;
  
  temp_v0 = lcgRandomRange(99);
  return temp_v0 < 10;
}

} /* extern "C" */
