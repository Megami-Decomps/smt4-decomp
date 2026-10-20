/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Light_DestroyOriginalValue` (_code @ 0x453164, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_Light_DestroyOriginalValue(int param_1)

{
  (**(romwright_code **)(**(int **)(param_1 + 4) + 0xc))
            (*(int **)(param_1 + 4),*(unsigned int *)(param_1 + 0x148));
  *(unsigned int *)(param_1 + 0x148) = 0;
  return;
}

} /* extern "C" */
