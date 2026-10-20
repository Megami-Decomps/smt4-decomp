#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


unsigned char FUN_0022e72c(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1368) == 0;
}

} /* extern "C" */
