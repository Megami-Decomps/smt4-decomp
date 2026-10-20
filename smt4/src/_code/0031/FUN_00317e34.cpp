#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


void FUN_00317e34(void)

{
  if (DAT_0044e190 != 0) {
    *(unsigned char *)(DAT_0044e190 + 0x2391) = 1;
  }
  return;
}

} /* extern "C" */
