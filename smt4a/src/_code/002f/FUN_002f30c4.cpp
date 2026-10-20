/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f30c4` (_code @ 0x2f30c4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002f30c4(int param_1)

{
  if ((*(char *)(param_1 + 4) != '\x03') && (*(int **)(param_1 + 0x3c) != (int *)0x0)) {
    (**(romwright_code **)(**(int **)(param_1 + 0x3c) + 4))();
    *(unsigned char *)(param_1 + 4) = 3;
  }
  return;
}

} /* extern "C" */
