#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


unsigned int FUN_002ab790(void)

{
  unsigned int temp_v0;
  
  if (DAT_0057f290 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0057f290 + 0x434);
  }
  else {
    temp_v0 = 0xffffffff;
  }
  return temp_v0;
}

} /* extern "C" */
