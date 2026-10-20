#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


unsigned char FUN_002a0ce8(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) != 0) {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 8);
  }
  return (*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) == 0 || temp_v0 == '\0';
}

} /* extern "C" */
