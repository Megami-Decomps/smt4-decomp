#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned int FUN_002f6564(void)

{
  unsigned int temp_v0;
  
  if ((DAT_0044e190 == 0) || (*(int *)(DAT_0044e190 + 0x400) != 7)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
