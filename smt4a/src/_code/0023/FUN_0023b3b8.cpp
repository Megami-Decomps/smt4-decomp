#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


unsigned int FUN_0023b3b8(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1374);
}

} /* extern "C" */
