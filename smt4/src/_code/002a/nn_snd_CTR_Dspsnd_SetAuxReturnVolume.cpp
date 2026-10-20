/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetAuxReturnVolume` (_code @ 0x2a8330, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);


void nn_snd_CTR_Dspsnd_SetAuxReturnVolume(int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0 */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int in_s0;
  
  temp_v0 = nn_snd_CTR_Dspsnd_IsInitialized();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    puVar2[param_2 + 2] = in_s0;
    if (param_2 == 0) {
      temp_v1 = *puVar2 | 0x1000000;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      temp_v1 = *puVar2 | 0x2000000;
    }
    *puVar2 = temp_v1;
  }
  return;
}

} /* extern "C" */
