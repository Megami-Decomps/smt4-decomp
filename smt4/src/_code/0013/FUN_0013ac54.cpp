#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern unsigned char nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(unsigned int, unsigned char);


unsigned char FUN_0013ac54(unsigned int param_1,unsigned char param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = nn_snd_CTR_Dspsnd_SetIsHeadsetConnected((unsigned int)&DAT_004e6f64,param_2);
  return temp_v0;
}

} /* extern "C" */
