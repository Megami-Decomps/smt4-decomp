#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


int FUN_0034a9ac(void)

{
  return (int)*(short *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x138c);
}

} /* extern "C" */
