#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044de98; /* 0x44de98 */


unsigned int FUN_002893d8(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044de98 + 0x20)) + 0xd0);
}

} /* extern "C" */
