#include "romwright_types.h"

extern "C" {

extern int DAT_0043dad0; /* 0x43dad0 */


unsigned char FUN_00211090(void)

{
  return *(char *)(DAT_0043dad0 + 0x125) != '\0';
}

} /* extern "C" */
