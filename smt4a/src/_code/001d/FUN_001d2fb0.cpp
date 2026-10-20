#include "romwright_types.h"

extern "C" {

extern unsigned char g_dspsndState; /* 0x6433d0 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelSyncCount(unsigned int, unsigned char, short);


void FUN_001d2fb0(unsigned int *param_1)

{
  if ((*(unsigned short *)(param_1 + 0x1b) & 0x8000) != 0) {
    nn_snd_CTR_Dspsnd_SetChannelSyncCount((unsigned int)&g_dspsndState,(unsigned char)*param_1,*(short *)(param_1 + 1));
    *(unsigned short *)(param_1 + 0x1b) = *(unsigned short *)(param_1 + 0x1b) & 0x7fff;
  }
  return;
}

} /* extern "C" */
