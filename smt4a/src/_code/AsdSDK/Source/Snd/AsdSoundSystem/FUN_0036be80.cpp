#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006308f8; /* 0x6308f8 */


int FUN_0036be80(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_006308f8 + 0x93));
}

} /* extern "C" */
