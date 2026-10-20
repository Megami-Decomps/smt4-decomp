#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


unsigned char FUN_0026c3a0(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1368) == 4;
}

} /* extern "C" */
