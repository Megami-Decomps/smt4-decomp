#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_00170e58(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x1)) = 0;
  return;
}

} /* extern "C" */
