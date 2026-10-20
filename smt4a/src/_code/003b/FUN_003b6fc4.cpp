#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */


int FUN_003b6fc4(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f268 != 0) {
    temp_v0 = (int)*(short *)(DAT_0057f268 + 0x3c);
  }
  return temp_v0;
}

} /* extern "C" */
