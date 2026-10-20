#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


void FUN_003599e8(unsigned int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x670) = param_1;
  *(unsigned char *)(temp_v0 + 0x674) = param_2;
  *(unsigned char *)(temp_v0 + 0x675) = param_3;
  *(unsigned char *)(temp_v0 + 0x676) = param_4;
  return;
}

} /* extern "C" */
