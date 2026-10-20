#include "romwright_types.h"

extern "C" {

extern int DAT_0057f118; /* 0x57f118 */


unsigned char FUN_002e2014(void)

{
  return *(char *)(DAT_0057f118 + 0x10f) != '\0';
}

} /* extern "C" */
