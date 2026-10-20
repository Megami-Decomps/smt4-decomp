#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f15fc; /* 0x5f15fc */


void FUN_00303a48(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x2c9)) = 1;
  return;
}

} /* extern "C" */
