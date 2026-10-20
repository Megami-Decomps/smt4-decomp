#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b40b4; /* 0x5b40b4 */


void FUN_0013ebd8(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b40b4 + 0x10)) = param_1;
  return;
}

} /* extern "C" */
