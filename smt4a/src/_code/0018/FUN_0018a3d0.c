/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a3d0` (_code @ 0x18a3d0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006433d0; /* 0x6433d0 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetIsHeadsetConnected. */


void FUN_0018a3d0(void)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(&DAT_006433d0);
  return;
}
