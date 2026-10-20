#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


void FUN_00215b40(unsigned short param_1)

{
  if (DAT_0044e190 != 0) {
    *(unsigned short *)(DAT_0044e190 + 0x47e) = param_1;
  }
  return;
}

} /* extern "C" */
