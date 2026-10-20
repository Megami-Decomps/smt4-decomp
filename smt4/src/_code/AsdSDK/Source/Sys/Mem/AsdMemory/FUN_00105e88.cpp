#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465170; /* 0x465170 */


void FUN_00105e88(unsigned char param_1)

{
  DAT_00465170 = param_1;
  return;
}

} /* extern "C" */
