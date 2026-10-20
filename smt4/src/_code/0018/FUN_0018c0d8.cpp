#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


unsigned short FUN_0018c0d8(void)

{
  return *(*(unsigned short * *)((unsigned char *)&DAT_0043e2a8 + 0xc));
}

} /* extern "C" */
