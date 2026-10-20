/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SetPanMode` (_code @ 0x461b28, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Voice_SetPanMode(int param_1,unsigned int param_2)

{
  if (*(unsigned char *)(param_1 + 0x2c) != param_2) {
    *(char *)(param_1 + 0x2c) = (char)param_2;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 8;
  }
  return;
}

} /* extern "C" */
