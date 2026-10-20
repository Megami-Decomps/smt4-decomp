#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006433d0; /* 0x6433d0 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelPlayStart(unsigned int, unsigned char);


void FUN_001d3168(unsigned int *param_1)

{
  nn_snd_CTR_Dspsnd_SetChannelPlayStart((unsigned int)&DAT_006433d0,(unsigned char)*param_1);
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}

} /* extern "C" */
