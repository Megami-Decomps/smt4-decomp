#include "romwright_types.h"

extern "C" {


int nw_snd_FxDelay_GetRequiredMemSize(int param_1)

{
  return *(int *)(param_1 + 0x44) * (unsigned int)*(unsigned char *)(param_1 + 0x5d) * 0x280 + 0x20;
}

} /* extern "C" */
