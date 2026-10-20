/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_CurveLfo_Reset` (_code @ 0x380210, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_CurveLfo_Reset(int param_1)

{
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

} /* extern "C" */
