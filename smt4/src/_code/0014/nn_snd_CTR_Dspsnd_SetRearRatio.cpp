/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetRearRatio` (_code @ 0x147070, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);


unsigned char nn_snd_CTR_Dspsnd_SetRearRatio(int param_1,unsigned short param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  temp_v1 = nn_snd_CTR_Dspsnd_IsInitialized();
  temp_v0 = 0;
  if (temp_v1 != 0) {
    if (param_2 >= 0x8001) {
      param_2 = 0x8000;
    }
    puVar3 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    *(unsigned short *)((int)puVar3 + 0x22) = param_2;
    *puVar3 = *puVar3 | 0x80000000;
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
