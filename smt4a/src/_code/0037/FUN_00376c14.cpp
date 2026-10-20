#include "romwright_types.h"

extern "C" {

extern int DAT_00580238; /* 0x580238 */


unsigned char FUN_00376c14(void)

{
  if (*(int *)(DAT_00580238 + 200) < 0x3f000000) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
