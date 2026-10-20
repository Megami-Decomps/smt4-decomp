#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_002292ac(void)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x30) = 1;
  }
  *(unsigned char *)(temp_v0 + 0x31) = 1;
  return;
}

} /* extern "C" */
