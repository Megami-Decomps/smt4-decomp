/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetSurroundSpeakerPosition` (_code @ 0x14729c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bb274(void);


unsigned int nn_snd_CTR_Dspsnd_SetSurroundSpeakerPosition(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = FUN_002bb274();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (param_2 >= 2) {
      temp_v1 = 0;
    }
    else {
      puVar3 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
      *(short *)((int)puVar3 + 0x1e) = (short)param_2;
      *puVar3 = *puVar3 | 0x40000000;
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
