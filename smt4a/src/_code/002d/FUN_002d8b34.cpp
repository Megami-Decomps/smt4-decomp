#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

extern int FUN_002a4b28(unsigned int);


void FUN_002d8b34(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002a4b28(param_1 & 0xffff);
  if (temp_v0 == 0) {
    (*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x308)) = param_1;
  }
  return;
}

} /* extern "C" */
