#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


unsigned char FUN_0022e750(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1368) == 9;
}

} /* extern "C" */
