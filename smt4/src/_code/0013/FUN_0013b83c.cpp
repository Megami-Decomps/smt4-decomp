#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_0013b83c(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x4)) = param_1;
  return;
}

} /* extern "C" */
