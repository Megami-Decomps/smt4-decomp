#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


unsigned int FUN_00259800(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x24ba4);
}

} /* extern "C" */
