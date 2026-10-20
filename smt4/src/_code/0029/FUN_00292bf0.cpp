#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


unsigned int FUN_00292bf0(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x1f4dc);
}

} /* extern "C" */
