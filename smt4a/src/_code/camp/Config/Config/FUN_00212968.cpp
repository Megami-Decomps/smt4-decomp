#include "romwright_types.h"

extern "C" {

extern int DAT_0057f230; /* 0x57f230 */


unsigned char FUN_00212968(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f230 != 0) {
    temp_v0 = *(int *)(DAT_0057f230 + 100);
  }
  return DAT_0057f230 == 0 || temp_v0 == 6;
}

} /* extern "C" */
