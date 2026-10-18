/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_PlayerHeapDataManager_Finalize` (_code @ 0x37ba38, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_snd_internal_PlayerHeapDataManager_Finalize(int param_1)

{
  if (*(char *)(param_1 + 0x261) == '\0') {
    *(unsigned char *)(param_1 + 0x260) = 0;
    *(unsigned char *)(param_1 + 0x261) = 1;
    *(unsigned int *)(param_1 + 0x10) = 0;
    return;
  }
  return;
}
