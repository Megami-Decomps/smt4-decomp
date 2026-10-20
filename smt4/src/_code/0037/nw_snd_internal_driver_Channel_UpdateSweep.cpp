/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Channel_UpdateSweep` (_code @ 0x37fab8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Channel_UpdateSweep(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = param_2;
  if (*(int *)(param_1 + 0xfc) < param_2) {
    param_2 = *(int *)(param_1 + 0xfc);
  }
  *(int *)(param_1 + 0xf8) = param_2;
  return;
}

} /* extern "C" */
