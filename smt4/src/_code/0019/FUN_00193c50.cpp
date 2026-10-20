#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e310; /* 0x43e310 */


int FUN_00193c50(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0043e310 + 0x3));
}

} /* extern "C" */
