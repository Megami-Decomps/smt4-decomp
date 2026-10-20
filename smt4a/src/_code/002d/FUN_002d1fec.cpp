#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f15fc; /* 0x5f15fc */


void FUN_002d1fec(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x574)) = 0;
  return;
}

} /* extern "C" */
