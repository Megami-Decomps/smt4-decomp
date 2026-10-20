#include "romwright_types.h"

extern "C" {

extern int DAT_005b4400; /* 0x5b4400 */


void FUN_0014938c(void)

{
  if (DAT_005b4400 != 0) {
    DAT_005b4400 = 0;
  }
  return;
}

} /* extern "C" */
