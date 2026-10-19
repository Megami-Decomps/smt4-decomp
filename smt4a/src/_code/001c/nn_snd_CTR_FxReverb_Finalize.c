/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_FxReverb_Finalize` (_code @ 0x1cda30, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_snd_CTR_FxReverb_Finalize(int param_1)

{
  if (*(char *)(param_1 + 0x104) != '\0') {
    *(unsigned char *)(param_1 + 0x104) = 0;
    *(unsigned int *)(param_1 + 0x3c) = 0;
    *(unsigned int *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x7c) = 0;
    *(unsigned int *)(param_1 + 0x40) = 0;
    *(unsigned int *)(param_1 + 0x50) = 0;
    *(unsigned int *)(param_1 + 100) = 0;
    *(unsigned int *)(param_1 + 0x68) = 0;
    *(unsigned int *)(param_1 + 0x80) = 0;
  }
  return;
}
