#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


unsigned char FUN_0031fdf0(void)

{
  char *q = (char *)DAT_0057f290 + 0x9100;
  return q[0xac] == '\0';
}

} /* extern "C" */
