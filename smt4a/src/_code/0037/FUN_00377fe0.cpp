#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */


unsigned char FUN_00377fe0(void)

{
  if (*(char *)(DAT_00580ca0 + 4) != '\0') {
    return 0;
  }
  return 1;
}

} /* extern "C" */
