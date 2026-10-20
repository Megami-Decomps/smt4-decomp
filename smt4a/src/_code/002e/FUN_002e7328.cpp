/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7328` (_code @ 0x2e7328, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002e7328(int param_1,unsigned int param_2)

{
  if (param_2 <= (unsigned int)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc))) {
    return 1;
  }
  *(unsigned char *)(param_1 + 4) = 1;
  return 0;
}

} /* extern "C" */
