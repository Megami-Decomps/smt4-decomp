/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c900` (_code @ 0x11c900, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

int FUN_0011c900(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 4) + 4))();
  }
  return param_1;
}

} /* extern "C" */
