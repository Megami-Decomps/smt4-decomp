/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001afdc4` (_code @ 0x1afdc4, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006449d0; /* 0x6449d0 */

/* Supplied declaration required: nn_snd_CTR_VoiceManager_FreeVoice. */


void FUN_001afdc4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_VoiceManager_FreeVoice(&DAT_006449d0,param_1);
  return;
}
