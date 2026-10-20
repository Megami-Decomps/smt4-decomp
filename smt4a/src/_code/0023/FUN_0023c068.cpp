#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


unsigned char FUN_0023c068(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0057f290 != 0) {
    temp_v0 = *(char *)(DAT_0057f290 + 0x430);
  }
  return DAT_0057f290 == 0 || temp_v0 == '\0';
}

} /* extern "C" */
