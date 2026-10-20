#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b4000; /* 0x5b4000 */


unsigned char FUN_001394ec(int param_1)

{
  if (param_1 != 0) {
    (*(int *)((unsigned char *)&DAT_005b4000 + 0xc)) = param_1;
  }
  return param_1 != 0;
}

} /* extern "C" */
