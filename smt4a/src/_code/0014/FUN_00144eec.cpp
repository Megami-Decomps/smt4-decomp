#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0063fd88; /* 0x63fd88 */


unsigned int FUN_00144eec(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0063fd88 + 0x1c0));
}

} /* extern "C" */
