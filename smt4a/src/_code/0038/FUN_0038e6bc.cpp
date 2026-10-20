/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e6bc` (_code @ 0x38e6bc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0038e6bc(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0x32;
  do {
    if (*(char *)(param_1 + temp_v0 * 0x8c + 0xa5) != '\0') {
      return 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x3c);
  return 1;
}

} /* extern "C" */
