#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelPlayStart(unsigned int, unsigned char);


void FUN_0015f000(unsigned int *param_1)

{
  nn_snd_CTR_Dspsnd_SetChannelPlayStart((unsigned int)&DAT_004e6f64,(unsigned char)*param_1);
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}

} /* extern "C" */
