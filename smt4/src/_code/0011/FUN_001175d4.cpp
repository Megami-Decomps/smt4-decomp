#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004c5634; /* 0x4c5634 */


void FUN_001175d4(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_004c5634 + 0x1e6)) = param_1;
  return;
}

} /* extern "C" */
