#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


unsigned int FUN_0015a2d8(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005891d8 + 0x18));
}

} /* extern "C" */
