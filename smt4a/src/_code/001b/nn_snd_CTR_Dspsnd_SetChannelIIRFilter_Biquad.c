/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Biquad` (_code @ 0x1b620c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001c6e20(void);


unsigned char nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Biquad
               (int param_1,unsigned char param_2,short param_3,short param_4,short param_5,short param_6,
               short param_7)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + (unsigned int)param_2 * 4 +
                       0x10b0);
    *(short *)(puVar2 + 0x10) = param_7;
    *(short *)((int)puVar2 + 0x42) = param_6;
    *(short *)(puVar2 + 0x11) = param_5;
    *(short *)((int)puVar2 + 0x46) = param_4;
    *(short *)(puVar2 + 0x12) = param_3;
    *puVar2 = *puVar2 | 0x1000000;
  }
  return temp_v0 != 0;
}
