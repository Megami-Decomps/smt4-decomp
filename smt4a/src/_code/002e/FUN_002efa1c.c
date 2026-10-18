/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efa1c` (_code @ 0x2efa1c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002efa1c(int param_1)

{
  if ((*(char *)(param_1 + 0x14c) != '\0') && (*(int *)(param_1 + 0x158) << 7 < 0)) {
    return 1;
  }
  return 0;
}
