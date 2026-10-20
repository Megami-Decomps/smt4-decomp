/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0f40` (_code @ 0x3f0f40, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003f86c8(unsigned int);


unsigned char FUN_003f0f40(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003f86c8(0x4d);
  return temp_v0 != 0;
}

} /* extern "C" */
