/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cb6c` (_code @ 0x28cb6c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00213b5c(void);


int FUN_0028cb6c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00213b5c();
  return temp_v0 * 0x28 + 0x57a6ec;
}

} /* extern "C" */
