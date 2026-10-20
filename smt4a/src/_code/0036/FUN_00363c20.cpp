#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005806a0; /* 0x5806a0 */


void FUN_00363c20(void)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_005806a0 + 0x4));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2b8) = 1;
  *(unsigned char *)(temp_v0 + 0x304) = 1;
  return;
}

} /* extern "C" */
