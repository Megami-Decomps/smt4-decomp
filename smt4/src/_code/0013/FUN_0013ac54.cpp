/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ac54` (_code @ 0x13ac54, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
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
