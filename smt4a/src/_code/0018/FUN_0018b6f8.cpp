#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0018b6f8(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x7)) = 0;
  return;
}

} /* extern "C" */
