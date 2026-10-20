#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */


void FUN_003857b4(unsigned char param_1)

{
  *(unsigned char *)(DAT_00581288 + 0x134) = param_1;
  return;
}

} /* extern "C" */
