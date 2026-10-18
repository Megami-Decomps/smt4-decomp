/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b2160` (_code @ 0x3b2160, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003b2160(int param_1)

{
  int temp_v0;
  
  if (*(char *)(param_1 + 0x4b0f) != '\0') {
    temp_v0 = (int)*(char *)(param_1 + 0x4b1c);
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
