#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */


unsigned int FUN_0031d864(void)

{
  unsigned int temp_v0;
  
  if ((DAT_0057f268 == 0) || (*(int *)(DAT_0057f268 + 0x1c) != 0xf)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
