/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4dea` (_code @ 0x2f4dea, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_002f4dea(int *param_1)

{
  unsigned int temp_v0;
  
  if ((param_1 != (int *)0x0) &&
     ((((unsigned int)param_1[0x1f] >= 0x6e && ((unsigned int)param_1[0x1f] < 0x78)) ||
      (temp_v0 = (**(romwright_code **)(*param_1 + 0x7c))(), (temp_v0 & 0x8000000) == 0)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
