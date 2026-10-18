/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002396f8` (_code @ 0x2396f8, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002396f8(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  while ((*(char *)(param_1 + temp_v0) == '\0' && (*(char *)(param_1 + temp_v0 + 1) == '\0'))) {
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 8) {
      return 1;
    }
  }
  return 0;
}
