/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3168` (_code @ 0x1d3168, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006433d0; /* 0x6433d0 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetChannelPlayStart. */


void FUN_001d3168(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_Dspsnd_SetChannelPlayStart(&DAT_006433d0,*param_1 & 0xff);
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}
