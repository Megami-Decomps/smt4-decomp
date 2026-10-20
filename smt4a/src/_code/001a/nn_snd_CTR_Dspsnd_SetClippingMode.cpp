#include "romwright_types.h"

extern "C" {

extern int FUN_001c6e20(void);


unsigned char nn_snd_CTR_Dspsnd_SetClippingMode(int param_1,unsigned short param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    *(unsigned short *)(puVar2 + 6) = param_2;
    *puVar2 = *puVar2 | 0x8000000;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
