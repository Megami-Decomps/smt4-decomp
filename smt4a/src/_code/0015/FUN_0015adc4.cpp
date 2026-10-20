#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0015adc4(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x1)) = 1;
  return;
}

} /* extern "C" */
