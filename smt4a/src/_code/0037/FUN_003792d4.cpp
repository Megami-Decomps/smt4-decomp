#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */


unsigned int FUN_003792d4(void)

{
  return *(unsigned int *)(DAT_00581288 + 0x1a8);
}

} /* extern "C" */
