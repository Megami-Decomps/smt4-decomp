#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */


void FUN_003c1094(int param_1)

{
  unsigned int temp_v0;
  
  if (DAT_0057f268 != 0) {
    temp_v0 = (param_1 != 0) ? 8 : 0x18;
    *(unsigned int *)(DAT_0057f268 + 0x20) = temp_v0;
  }
  return;
}

} /* extern "C" */
