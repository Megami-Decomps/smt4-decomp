/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2fb0` (_code @ 0x1d2fb0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006433d0; /* 0x6433d0 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetChannelSyncCount. */


void FUN_001d2fb0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((param_1[0x1b] & 0x8000) != 0) {
    nn_snd_CTR_Dspsnd_SetChannelSyncCount(&DAT_006433d0,*param_1 & 0xff,(int)(short)param_1[1]);
    *(unsigned short *)(param_1 + 0x1b) = (unsigned short)param_1[0x1b] & 0x7fff;
  }
  return;
}
