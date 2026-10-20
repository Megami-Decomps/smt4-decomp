#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */


unsigned char FUN_001eb82c(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x10) == 2;
}

} /* extern "C" */
