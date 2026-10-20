#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcf0; /* 0x43dcf0 */


int FUN_0031c274(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcf0 != 0) {
    temp_v0 = (int)*(short *)(DAT_0043dcf0 + 0x3c);
  }
  return temp_v0;
}

} /* extern "C" */
