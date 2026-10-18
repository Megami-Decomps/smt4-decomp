/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f5ec0` (_code @ 0x1f5ec0, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b2378(unsigned int);


unsigned int FUN_001f5ec0(unsigned int *param_1)

{
  int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  if ((param_1 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_002b2378(*param_1), temp_v0 != 0 || (*(char *)((int)param_1 + 9) == '\0')))) {
    return 1;
  }
  return 0;
}
