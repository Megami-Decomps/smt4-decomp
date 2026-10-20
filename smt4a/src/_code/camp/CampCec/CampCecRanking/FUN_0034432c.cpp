#include "romwright_types.h"

extern "C" {

extern int DAT_0057f11c; /* 0x57f11c */


unsigned char FUN_0034432c(void)

{
  return *(char *)(DAT_0057f11c + 8) != '\0';
}

} /* extern "C" */
