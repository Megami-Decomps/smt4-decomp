#include "romwright_types.h"

extern "C" {

extern int DAT_004474d8; /* 0x4474d8 */


void FUN_001e2650(void)

{
  if (*(short *)(DAT_004474d8 + 0x14) == 1) {
    *(unsigned short *)(DAT_004474d8 + 0x14) = 2;
  }
  return;
}

} /* extern "C" */
