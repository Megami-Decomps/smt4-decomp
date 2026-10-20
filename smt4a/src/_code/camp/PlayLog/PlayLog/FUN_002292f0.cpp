#include "romwright_types.h"

extern "C" {

extern int DAT_0057f278; /* 0x57f278 */


unsigned char FUN_002292f0(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f278 != 0) {
    temp_v0 = *(int *)(DAT_0057f278 + 0x344);
  }
  return DAT_0057f278 == 0 || temp_v0 == 4;
}

} /* extern "C" */
