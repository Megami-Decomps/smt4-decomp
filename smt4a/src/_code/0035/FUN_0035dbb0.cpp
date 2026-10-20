#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


unsigned char FUN_0035dbb0(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20ad) == '\0';
}

} /* extern "C" */
