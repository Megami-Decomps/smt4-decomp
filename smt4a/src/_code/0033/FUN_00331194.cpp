#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned char FUN_00331194(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) != 0) {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 8);
  }
  return (*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) == 0 || temp_v0 == '\0';
}

} /* extern "C" */
