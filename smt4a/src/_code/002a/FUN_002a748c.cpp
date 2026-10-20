#include "romwright_types.h"

extern "C" {

extern int DAT_0057f2c4; /* 0x57f2c4 */


unsigned char FUN_002a748c(void)

{
  return *(int *)(DAT_0057f2c4 + 4) == 8;
}

} /* extern "C" */
