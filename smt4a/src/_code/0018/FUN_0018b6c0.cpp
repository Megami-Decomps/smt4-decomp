#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0018b6c0(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x8)) = 0;
  return;
}

} /* extern "C" */
