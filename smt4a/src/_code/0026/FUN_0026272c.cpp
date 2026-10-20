#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned char FUN_0026272c(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) != 0) {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) + 8);
  }
  return (*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) == 0 || temp_v0 == '\0';
}

} /* extern "C" */
