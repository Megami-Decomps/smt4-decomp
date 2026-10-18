/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005094c4` (_code @ 0x5094c4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_005094c4(int param_1)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0x51) != '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
