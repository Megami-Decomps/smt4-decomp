#include "romwright_types.h"

extern "C" {

extern int DAT_00587f28; /* 0x587f28 */


unsigned char FUN_003de16c(void)

{
  if (DAT_00587f28 != 0) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
