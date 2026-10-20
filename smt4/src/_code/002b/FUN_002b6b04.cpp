#include "romwright_types.h"

extern "C" {

extern int DAT_0043e128; /* 0x43e128 */


unsigned char FUN_002b6b04(void)

{
  return *(int *)(DAT_0043e128 + 8) != 0;
}

} /* extern "C" */
