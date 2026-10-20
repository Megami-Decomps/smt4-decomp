#include "romwright_types.h"

extern "C" {

extern int DAT_0057f128; /* 0x57f128 */


unsigned char FUN_002e23e8(void)

{
  return *(char *)(DAT_0057f128 + 1000) != '\0';
}

} /* extern "C" */
