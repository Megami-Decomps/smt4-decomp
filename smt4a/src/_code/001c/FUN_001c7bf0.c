/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7bf0` (_code @ 0x1c7bf0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006433d0; /* 0x6433d0 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetChannelAdpcmParam. */


void FUN_001c7bf0(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(&DAT_006433d0,**(unsigned int **)(param_1 + 0x68) & 0xff,param_2);
  return;
}
