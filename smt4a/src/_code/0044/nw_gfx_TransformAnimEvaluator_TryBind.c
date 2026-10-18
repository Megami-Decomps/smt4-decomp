/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_TransformAnimEvaluator_TryBind` (_code @ 0x44ca04, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_004498ec. */
/* Supplied declaration required: FUN_0044c7f0. */


unsigned int nw_gfx_TransformAnimEvaluator_TryBind(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_1;
  FUN_004498ec();
  if ((temp_v0 & 0x80000000) == 0) {
    FUN_0044c7f0(param_1,param_2,*(unsigned int *)(param_1 + 0x54));
    *(unsigned int *)(param_1 + 8) = param_2;
  }
  return temp_v0;
}
