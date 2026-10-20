/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHandle_DetachSound` (_code @ 0x15ddf8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_SoundHandle_DetachSound(int *param_1)

{
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    if (*(int **)(temp_v0 + 8) == param_1) {
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int **)(*param_1 + 0xc) == param_1) {
      *(unsigned int *)(*param_1 + 0xc) = 0;
    }
    if (*param_1 != 0) {
      *param_1 = 0;
    }
  }
  return;
}

} /* extern "C" */
