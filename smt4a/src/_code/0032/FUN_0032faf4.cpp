#include "romwright_types.h"

extern "C" {

extern int DAT_0057f134; /* 0x57f134 */


unsigned char FUN_0032faf4(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0057f134 != 0) {
    temp_v0 = *(char *)(DAT_0057f134 + 4);
  }
  return DAT_0057f134 == 0 || temp_v0 == '\0';
}

} /* extern "C" */
