#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd68; /* 0x43dd68 */


unsigned char FUN_0026ab40(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0043dd68 != 0) {
    temp_v0 = *(char *)(DAT_0043dd68 + 0x430);
  }
  return DAT_0043dd68 == 0 || temp_v0 == '\0';
}

} /* extern "C" */
