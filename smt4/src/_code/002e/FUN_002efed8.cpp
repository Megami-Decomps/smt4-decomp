#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


void FUN_002efed8(unsigned char param_1)

{
  if (DAT_0044e190 != 0) {
    *(unsigned char *)(DAT_0044e190 + 0x411) = param_1;
  }
  return;
}

} /* extern "C" */
