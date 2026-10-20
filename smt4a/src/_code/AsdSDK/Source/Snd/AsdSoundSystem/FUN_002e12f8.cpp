#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006308f8; /* 0x6308f8 */


int FUN_002e12f8(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_006308f8 + 0x92));
}

} /* extern "C" */
