#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


unsigned char FUN_0023b3f8(void)

{
  return (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0;
}

} /* extern "C" */
