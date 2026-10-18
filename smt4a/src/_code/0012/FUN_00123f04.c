/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123f04` (_code @ 0x123f04, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00123eac(void);


unsigned int FUN_00123f04(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00123eac();
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v1 = 0, *(char *)(param_1 + 0x11a) != '\0')) {
    temp_v1 = 1;
  }
  return temp_v1;
}
