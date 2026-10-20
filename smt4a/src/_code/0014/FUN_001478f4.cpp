#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


unsigned char FUN_001478f4(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x5));
}

} /* extern "C" */
