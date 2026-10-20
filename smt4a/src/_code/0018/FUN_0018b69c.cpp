#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0018b69c(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x8)) = 1;
  return;
}

} /* extern "C" */
