#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelSyncCount(unsigned int, unsigned char, short);


void FUN_0015ee48(unsigned int *param_1)

{
  if ((*(unsigned short *)(param_1 + 0x1b) & 0x8000) != 0) {
    nn_snd_CTR_Dspsnd_SetChannelSyncCount((unsigned int)&DAT_004e6f64,(unsigned char)*param_1,*(short *)(param_1 + 1));
    *(unsigned short *)(param_1 + 0x1b) = *(unsigned short *)(param_1 + 0x1b) & 0x7fff;
  }
  return;
}

} /* extern "C" */
