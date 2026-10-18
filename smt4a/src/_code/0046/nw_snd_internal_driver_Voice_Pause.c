/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_Pause` (_code @ 0x461c2c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_snd_internal_driver_Voice_Pause(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x17) != param_2) {
    *(char *)(param_1 + 0x17) = (char)param_2;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 2;
  }
  return;
}
