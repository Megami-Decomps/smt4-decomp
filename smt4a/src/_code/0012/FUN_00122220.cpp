#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005949d8; /* 0x5949d8 */


int FUN_00122220(void)

{
  return (*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x144;
}

} /* extern "C" */
