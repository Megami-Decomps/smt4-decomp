/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_FxDelay_GetRequiredMemSize` (_code @ 0x110d38, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_snd_FxDelay_GetRequiredMemSize(int param_1)

{
  return *(int *)(param_1 + 0x44) * (unsigned int)*(unsigned char *)(param_1 + 0x5d) * 0x280 + 0x20;
}
