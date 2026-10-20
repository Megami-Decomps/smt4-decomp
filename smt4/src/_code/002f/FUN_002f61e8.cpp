#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


unsigned char FUN_002f61e8(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 8) == '\x04';
}

} /* extern "C" */
