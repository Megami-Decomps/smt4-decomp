#include "romwright_types.h"

extern "C" {

extern unsigned char g_dspsndState; /* 0x6433d0 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelPlayStart(unsigned int, unsigned char);


void FUN_001d3168(unsigned int *param_1)

{
  nn_snd_CTR_Dspsnd_SetChannelPlayStart((unsigned int)&g_dspsndState,(unsigned char)*param_1);
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}

} /* extern "C" */
