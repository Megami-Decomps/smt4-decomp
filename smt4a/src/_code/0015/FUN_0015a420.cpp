#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


unsigned char FUN_0015a420(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0xb));
}

} /* extern "C" */
