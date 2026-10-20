#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


unsigned char FUN_0027d98c(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x1ecd8);
}

} /* extern "C" */
