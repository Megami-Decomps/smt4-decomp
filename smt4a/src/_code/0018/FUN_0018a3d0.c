/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a3d0` (_code @ 0x18a3d0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006433d0; /* 0x6433d0 */

extern unsigned char nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(unsigned int, unsigned char);


unsigned char FUN_0018a3d0(unsigned int param_1,unsigned char param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = nn_snd_CTR_Dspsnd_SetIsHeadsetConnected((unsigned int)&DAT_006433d0,param_2);
  return temp_v0;
}
