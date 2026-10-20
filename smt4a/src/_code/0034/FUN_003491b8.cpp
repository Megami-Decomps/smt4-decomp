#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned int FUN_003491b8(void)

{
  unsigned int temp_v0;
  
  if ((*(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x8e) == '\0') || (*(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x8d) != '\x02')) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
