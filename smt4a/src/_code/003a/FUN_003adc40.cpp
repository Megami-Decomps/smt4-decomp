/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adc40` (_code @ 0x3adc40, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


unsigned char FUN_003adc40(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return *(char *)(temp_v0 + 0x1c) == '\x01';
}

} /* extern "C" */
