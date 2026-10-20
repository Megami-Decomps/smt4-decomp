#include "romwright_types.h"

extern "C" {


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

} /* extern "C" */
