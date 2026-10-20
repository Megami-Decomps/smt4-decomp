#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


void FUN_002a49b4(void)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f248 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) != 0) {
    *(unsigned short *)(temp_v0 + 0x64e) = 0xffff;
    *(unsigned char *)(temp_v0 + 8) = 0;
    *(unsigned short *)(temp_v0 + 0x650) = 0;
  }
  return;
}

} /* extern "C" */
