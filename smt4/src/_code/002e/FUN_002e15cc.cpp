#include "romwright_types.h"

extern "C" {

extern int DAT_0043dfc0; /* 0x43dfc0 */


unsigned int FUN_002e15cc(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if ((DAT_0043dfc0 != 0) && (param_1 < 4)) {
    temp_v0 = *(unsigned int *)(DAT_0043dfc0 + param_1 * 4 + 0x630);
  }
  return temp_v0;
}

} /* extern "C" */
