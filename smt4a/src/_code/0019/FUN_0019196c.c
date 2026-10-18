/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019196c` (_code @ 0x19196c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0019196c(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (param_2 != 2) {
      return 0;
    }
  }
  else if (param_2 != 1) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 6) {
    return 0;
  }
  return 1;
}
