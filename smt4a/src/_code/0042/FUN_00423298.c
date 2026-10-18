/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00423298` (_code @ 0x423298, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00423298(int param_1)

{
  if ((*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) &&
     (*(char *)(param_1 + (*(unsigned int *)(param_1 + 0x5c) & 3) * 0x14 + 0x18) != '\0')) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    return 1;
  }
  return 0;
}
