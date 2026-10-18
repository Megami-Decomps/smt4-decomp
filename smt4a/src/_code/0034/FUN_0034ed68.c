/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ed68` (_code @ 0x34ed68, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0034ed68(int param_1)

{
  unsigned int temp_v0;
  
  if ((*(char *)(param_1 + 0x1342) == '\0') && (*(short *)(param_1 + 0x1308) != 0)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
