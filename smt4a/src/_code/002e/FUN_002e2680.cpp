#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


void FUN_002e2680(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f110 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x1a4) = param_1;
    *(unsigned int *)(temp_v0 + 0x1a0) = 2;
  }
  return;
}

} /* extern "C" */
