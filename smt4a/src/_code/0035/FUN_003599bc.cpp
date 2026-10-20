#include "romwright_types.h"

extern "C" {

extern int DAT_0057f4c4; /* 0x57f4c4 */


unsigned int FUN_003599bc(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if ((DAT_0057f4c4 != 0) && (param_1 < 4)) {
    temp_v0 = *(unsigned int *)(DAT_0057f4c4 + param_1 * 4 + 0x634);
  }
  return temp_v0;
}

} /* extern "C" */
