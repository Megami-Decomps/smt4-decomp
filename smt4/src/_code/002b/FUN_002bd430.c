/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd430` (_code @ 0x2bd430, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e8568; /* 0x4e8568 */

/* Supplied declaration required: nn_snd_CTR_VoiceManager_FreeVoice. */


void FUN_002bd430(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_VoiceManager_FreeVoice(&DAT_004e8568,param_1);
  return;
}
