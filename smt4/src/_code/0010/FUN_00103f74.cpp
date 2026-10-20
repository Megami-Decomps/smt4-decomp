#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004650a0; /* 0x4650a0 */


unsigned char FUN_00103f74(int param_1)

{
  if (param_1 != 0) {
    (*(int *)((unsigned char *)&DAT_004650a0 + 0x10)) = param_1;
  }
  return param_1 != 0;
}

} /* extern "C" */
