/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023764c` (_code @ 0x23764c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0023764c(int param_1)

{
  (**(romwright_code **)(**(int **)(param_1 + 4) + 0xc))
            (*(int **)(param_1 + 4),*(unsigned int *)(param_1 + 0x148));
  *(unsigned int *)(param_1 + 0x148) = 0;
  return;
}
