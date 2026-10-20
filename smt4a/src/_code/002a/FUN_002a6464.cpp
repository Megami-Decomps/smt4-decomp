#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f6c8; /* 0x57f6c8 */


unsigned char FUN_002a6464(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f6c8 + 0x8)) == 0;
}

} /* extern "C" */
