/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Camera_GetFar` (_code @ 0x50709c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_Camera_GetFar(int param_1)

{
  (**(romwright_code **)(**(int **)(param_1 + 0x260) + 0x14))();
  return;
}

} /* extern "C" */
