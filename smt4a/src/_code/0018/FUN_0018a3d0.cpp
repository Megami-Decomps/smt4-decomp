#include "romwright_types.h"

extern "C" {

extern unsigned char g_dspsndState; /* 0x6433d0 */

extern unsigned char nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(unsigned int, unsigned char);


unsigned char FUN_0018a3d0(unsigned int param_1,unsigned char param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = nn_snd_CTR_Dspsnd_SetIsHeadsetConnected((unsigned int)&g_dspsndState,param_2);
  return temp_v0;
}

} /* extern "C" */
