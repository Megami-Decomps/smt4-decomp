#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e0b8; /* 0x43e0b8 */


int FUN_002897e0(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0043e0b8 + 0x2));
}

} /* extern "C" */
