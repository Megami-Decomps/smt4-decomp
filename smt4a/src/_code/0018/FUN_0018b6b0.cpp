#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


int FUN_0018b6b0(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005891d8 + 0x8));
}

} /* extern "C" */
