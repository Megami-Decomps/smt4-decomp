#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044de98; /* 0x44de98 */


unsigned int FUN_002865f8(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044de98 + 0x20)) + 0xc0);
}

} /* extern "C" */
