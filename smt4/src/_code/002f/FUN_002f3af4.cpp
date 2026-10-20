#include "romwright_types.h"

extern "C" {

extern int DAT_00447a48; /* 0x447a48 */


unsigned char FUN_002f3af4(void)

{
  if (*(char *)(DAT_00447a48 + 4) != '\0') {
    return 0;
  }
  return 1;
}

} /* extern "C" */
