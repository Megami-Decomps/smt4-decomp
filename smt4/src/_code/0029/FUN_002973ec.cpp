#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


unsigned char FUN_002973ec(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x24bb0);
}

} /* extern "C" */
