/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d066c` (_code @ 0x4d066c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_004d066c(int param_1)

{
  int temp_v0;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    temp_v0 = (int)*(short *)(param_1 + 0x14);
  }
  else {
    temp_v0 = -1;
  }
  return temp_v0;
}

} /* extern "C" */
