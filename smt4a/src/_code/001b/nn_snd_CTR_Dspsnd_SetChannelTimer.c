/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelTimer` (_code @ 0x1b5e54, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001c6e20(void);


unsigned char nn_snd_CTR_Dspsnd_SetChannelTimer(int param_1,unsigned char param_2,float param_3)

{
/* irregular: irregular input(s): in_s0 */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int in_s0;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + (unsigned int)param_2 * 4 +
                       0x10b0);
    puVar2[0xd] = in_s0;
    *puVar2 = *puVar2 | 0x40000;
  }
  return temp_v0 != 0;
}
