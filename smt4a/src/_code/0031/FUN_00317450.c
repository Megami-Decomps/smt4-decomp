/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317450` (_code @ 0x317450, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003174bc(void);


int FUN_00317450(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003174bc();
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0x208;
  }
  return temp_v0;
}
