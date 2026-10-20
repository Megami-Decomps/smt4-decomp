/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5fac` (_code @ 0x3c5fac, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003135a8(void);


unsigned char FUN_003c5fac(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003135a8();
  return temp_v0 != 0x2d;
}

} /* extern "C" */
