#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


int FUN_0015a430(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005891d8 + 0xd));
}

} /* extern "C" */
