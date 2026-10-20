#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0028cad4(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e190 != 0) {
    temp_v0 = *(int *)(DAT_0044e190 + 0x400);
  }
  return DAT_0044e190 == 0 || temp_v0 == 0;
}

} /* extern "C" */
