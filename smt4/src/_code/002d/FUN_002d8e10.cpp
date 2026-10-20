#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


unsigned int FUN_002d8e10(void)

{
  unsigned int temp_v0;
  
  if ((*(char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x7d) == '\0') || (*(char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x7c) != '\x02')) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
