#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


unsigned int FUN_00344c6c(void)

{
  unsigned int temp_v0;
  
  if (((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) == 0) ||
     (*(int *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x1a0) != 1 && *(int *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x1a0) != 2)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
