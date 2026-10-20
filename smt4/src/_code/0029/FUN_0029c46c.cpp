#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0029c46c(void)

{
  if (*(int *)(DAT_0044e190 + 0x400) == 1) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
