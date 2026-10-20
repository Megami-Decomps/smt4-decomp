/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Channel_FreeChannel` (_code @ 0x235c44, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Channel_FreeChannel(int param_1)

{
  if (param_1 != 0) {
    *(unsigned int *)(param_1 + 300) = 0;
    *(unsigned int *)(param_1 + 0x130) = 0;
  }
  return;
}

} /* extern "C" */
