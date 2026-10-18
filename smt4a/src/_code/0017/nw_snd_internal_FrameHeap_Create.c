/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_FrameHeap_Create` (_code @ 0x175d30, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0018c8f4. */
/* Supplied declaration required: FUN_0018c988. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_ClearSection. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_NewSection. */
/* Supplied declaration required: nw_ut_FrameHeap_Free. */


void nw_snd_internal_FrameHeap_Create(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*param_1 != 0) {
    nw_snd_internal_FrameHeap_ClearSection(param_1);
    nw_ut_FrameHeap_Free(*param_1,3);
    FUN_0018c988(*param_1);
    *param_1 = 0;
  }
  temp_v0 = (param_2 + 3U) & 0xfffffffc;
  if (temp_v0 <= (unsigned int)(param_2 + param_3)) {
    FUN_0018c8f4(temp_v0,(param_2 + param_3) - temp_v0,0);
    *param_1 = temp_v0;
    if (temp_v0 != 0) {
      nw_snd_internal_FrameHeap_NewSection(param_1);
    }
  }
  return;
}
