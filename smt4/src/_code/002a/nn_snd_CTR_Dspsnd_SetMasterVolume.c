/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetMasterVolume` (_code @ 0x2a83a0, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb274(void);


void nn_snd_CTR_Dspsnd_SetMasterVolume(int param_1,float param_2)

{
/* irregular: irregular input(s): in_s0 */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int in_s0;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    puVar2[1] = in_s0;
    *puVar2 = *puVar2 | 0x10000;
  }
  return;
}
