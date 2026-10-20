#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


int FUN_002c7e24(void)

{
  return (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1390;
}

} /* extern "C" */
