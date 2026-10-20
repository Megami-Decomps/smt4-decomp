#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005894e4; /* 0x5894e4 */


int FUN_001d2a54(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005894e4 + 0x4));
}

} /* extern "C" */
