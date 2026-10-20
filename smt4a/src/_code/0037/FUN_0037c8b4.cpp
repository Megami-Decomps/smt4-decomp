#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned int FUN_0037c8b4(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x93) = param_2;
  *(unsigned int *)(temp_v0 + 0x80) = param_1;
  *(unsigned int *)(temp_v0 + 0x84) = param_1;
  *(unsigned char *)(temp_v0 + 0x92) = 1;
  *(unsigned char *)(temp_v0 + 0x8c) = 0;
  return 1;
}

} /* extern "C" */
