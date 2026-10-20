#include "romwright_types.h"

extern "C" {

extern int DAT_0057f3b0; /* 0x57f3b0 */


unsigned int FUN_003c0db0(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if (DAT_0057f3b0 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0057f3b0 + 0x48);
  }
  return temp_v0;
}

} /* extern "C" */
