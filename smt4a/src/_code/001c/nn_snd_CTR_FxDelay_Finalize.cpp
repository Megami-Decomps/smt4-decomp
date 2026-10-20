/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_FxDelay_Finalize` (_code @ 0x1cd9e4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nn_snd_CTR_FxDelay_Finalize(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0x56) != '\0') {
    *(unsigned char *)(param_1 + 0x56) = 0;
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
    temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x55);
    if (temp_v1 != 0) {
      temp_v2 = 0;
      do {
        temp_v0 = temp_v2 * 4;
        temp_v1 = temp_v1 - 1;
        temp_v2 = temp_v2 + 1;
        *(unsigned int *)(param_1 + temp_v0 + 0x1c) = 0;
      } while (temp_v1 != 0);
    }
  }
  return;
}

} /* extern "C" */
