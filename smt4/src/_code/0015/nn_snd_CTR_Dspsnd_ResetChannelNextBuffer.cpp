#include "romwright_types.h"

extern "C" {

extern int FUN_002bb274(void);


unsigned char nn_snd_CTR_Dspsnd_ResetChannelNextBuffer(int param_1,unsigned char param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + (unsigned int)param_2 * 4 +
                       0x10b0);
    *puVar2 = *puVar2 | 0x10;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
