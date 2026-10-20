/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7bf0` (_code @ 0x1c7bf0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006433d0; /* 0x6433d0 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(unsigned int, unsigned char, unsigned int);


unsigned char FUN_001c7bf0(int param_1,unsigned int param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = nn_snd_CTR_Dspsnd_SetChannelAdpcmParam
                    ((unsigned int)&DAT_006433d0,(unsigned char)**(unsigned int **)(param_1 + 0x68),param_2);
  return temp_v0;
}

} /* extern "C" */
