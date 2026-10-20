#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */


unsigned int FUN_00367f98(void)

{
  return *(unsigned int *)(DAT_00581288 + 0x1d0);
}

} /* extern "C" */
