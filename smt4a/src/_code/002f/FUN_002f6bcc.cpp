/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6bcc` (_code @ 0x2f6bcc, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002f6bcc(int param_1)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0x9f) != '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
    if (*(int *)(param_1 + 4) != 1) {
      return 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
