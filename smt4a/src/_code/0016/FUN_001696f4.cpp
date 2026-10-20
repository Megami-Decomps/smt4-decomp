#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0063fd88; /* 0x63fd88 */


unsigned int FUN_001696f4(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0063fd88 + 0x1c8));
}

} /* extern "C" */
