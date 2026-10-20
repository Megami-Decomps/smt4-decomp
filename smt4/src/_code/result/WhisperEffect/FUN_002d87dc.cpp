#include "romwright_types.h"

extern "C" {

extern int DAT_0044dc50; /* 0x44dc50 */

extern int FUN_002893d8(int);


unsigned int FUN_002d87dc(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_0044dc50 == 0) {
    temp_v0 = 1;
  }
  else {
    temp_v1 = FUN_002893d8(DAT_0044dc50);
    if (temp_v1 == 0) {
      *(unsigned char *)(DAT_0044dc50 + 8) = 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
