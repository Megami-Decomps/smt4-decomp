#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3268; /* 0x5b3268 */


unsigned int FUN_00340eb0(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = (*(unsigned int *)((unsigned char *)&DAT_005b3268 + 0x4));
  (*(unsigned int *)((unsigned char *)&DAT_005b3268 + 0x4)) = param_1;
  return temp_v0;
}

} /* extern "C" */
