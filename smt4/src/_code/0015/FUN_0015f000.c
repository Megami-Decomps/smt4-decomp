/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f000` (_code @ 0x15f000, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelPlayStart(unsigned int, unsigned char);


void FUN_0015f000(unsigned int *param_1)

{
  nn_snd_CTR_Dspsnd_SetChannelPlayStart((unsigned int)&DAT_004e6f64,(unsigned char)*param_1);
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}
