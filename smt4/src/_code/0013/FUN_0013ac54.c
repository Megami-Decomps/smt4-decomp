/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ac54` (_code @ 0x13ac54, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetIsHeadsetConnected. */


void FUN_0013ac54(void)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(&DAT_004e6f64);
  return;
}
