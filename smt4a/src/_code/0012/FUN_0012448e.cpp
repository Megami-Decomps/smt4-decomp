/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012448e` (_code @ 0x12448e, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0012448e(int param_1)

{
  if ((*(int *)(param_1 + 0x11c) != 0) && (*(char *)(*(int *)(param_1 + 0x11c) + 0x22) != '\x05')) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
