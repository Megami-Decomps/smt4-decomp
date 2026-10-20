#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


unsigned int FUN_0029e620(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x81) = param_2;
  *(unsigned int *)(temp_v0 + 0x70) = param_1;
  *(unsigned int *)(temp_v0 + 0x74) = param_1;
  *(unsigned char *)(temp_v0 + 0x80) = 1;
  return 1;
}

} /* extern "C" */
