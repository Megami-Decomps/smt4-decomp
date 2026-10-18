/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_FrameHeap_Destroy` (_code @ 0x175db4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0018c988. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_ClearSection. */
/* Supplied declaration required: nw_ut_FrameHeap_Free. */


void nw_snd_internal_FrameHeap_Destroy(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*param_1 != 0) {
    nw_snd_internal_FrameHeap_ClearSection(param_1);
    nw_ut_FrameHeap_Free(*param_1,3);
    FUN_0018c988(*param_1);
    *param_1 = 0;
  }
  return;
}
