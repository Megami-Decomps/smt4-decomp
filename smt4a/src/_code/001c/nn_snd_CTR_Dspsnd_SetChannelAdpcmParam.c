/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelAdpcmParam` (_code @ 0x1c785c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001c6e20(void);
/* Supplied declaration required: rt_memcpy. */


unsigned char nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(int param_1,unsigned char param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + (unsigned int)param_2 * 4 +
                       0x10b0);
    rt_memcpy(*(unsigned int *)
               (param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 0x60 + (unsigned int)param_2 * 4 + 0x1230),
              param_3,0x20);
    *puVar2 = *puVar2 | 4;
  }
  return temp_v0 != 0;
}
