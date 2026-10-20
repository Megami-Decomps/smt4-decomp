#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3bf4; /* 0x5b3bf4 */


int FUN_0032c1ac(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005b3bf4 + 0x2));
}

} /* extern "C" */
