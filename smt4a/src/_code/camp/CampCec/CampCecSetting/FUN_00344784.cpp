#include "romwright_types.h"

extern "C" {

extern int DAT_0057f12c; /* 0x57f12c */


unsigned char FUN_00344784(void)

{
  return *(char *)(DAT_0057f12c + 0x40) != '\0';
}

} /* extern "C" */
