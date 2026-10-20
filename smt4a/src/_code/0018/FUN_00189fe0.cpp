/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189fe0` (_code @ 0x189fe0, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_Dspsnd_SetDspDelayEffect(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetDspReverbEffect(unsigned char *, int);

extern unsigned char g_dspsndState; /* 0x6433d0 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetDspDelayEffect. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetDspReverbEffect. */


void FUN_00189fe0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = (int)(char)temp_v0;
    *(unsigned short *)(param_1 + temp_v1 * 0x14) = 0xffff;
    nn_snd_CTR_Dspsnd_SetDspDelayEffect(&g_dspsndState,temp_v1);
    *(unsigned short *)(param_1 + temp_v1 * 0x34 + 0x28) = 0xffff;
    nn_snd_CTR_Dspsnd_SetDspReverbEffect(&g_dspsndState,temp_v1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return;
}

} /* extern "C" */
