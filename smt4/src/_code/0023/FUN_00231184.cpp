#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */


unsigned char FUN_00231184(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x10) != 1;
}

} /* extern "C" */
