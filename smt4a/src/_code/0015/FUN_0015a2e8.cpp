#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


unsigned char FUN_0015a2e8(void)

{
  return ((*(unsigned int *)((unsigned char *)&DAT_005891d8 + 0x18)) & 7) == 6;
}

} /* extern "C" */
