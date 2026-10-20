#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005949d8; /* 0x5949d8 */


int FUN_001224a0(void)

{
  return (*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x160;
}

} /* extern "C" */
