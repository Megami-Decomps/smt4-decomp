/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_CurveLfoParam_Initialize` (_code @ 0x2a472c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_CurveLfoParam_Initialize(unsigned int *param_1)

{
  *param_1 = 0;
  *(unsigned char *)(param_1 + 3) = 1;
  param_1[1] = 0x40c80000;
  param_1[2] = 0;
  return;
}

} /* extern "C" */
