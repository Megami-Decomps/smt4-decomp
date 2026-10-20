#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044ea58; /* 0x44ea58 */


unsigned int FUN_0024ac4c(int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 == 2) {
    temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x84);
  }
  else {
    temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x80);
  }
  return temp_v0;
}

} /* extern "C" */
