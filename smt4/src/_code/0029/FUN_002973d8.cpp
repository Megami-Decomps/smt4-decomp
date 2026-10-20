#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


unsigned int FUN_002973d8(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x1c);
}

} /* extern "C" */
