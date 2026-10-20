/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340ec8` (_code @ 0x340ec8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003174bc(void);


int FUN_00340ec8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003174bc();
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0x20c;
  }
  return temp_v0;
}

} /* extern "C" */
