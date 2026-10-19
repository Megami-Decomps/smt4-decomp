/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd430` (_code @ 0x2bd430, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e8568; /* 0x4e8568 */

extern void nn_snd_CTR_VoiceManager_FreeVoice(unsigned int, unsigned int);


void FUN_002bd430(unsigned int param_1)

{
  nn_snd_CTR_VoiceManager_FreeVoice((unsigned int)&DAT_004e8568,param_1);
  return;
}
