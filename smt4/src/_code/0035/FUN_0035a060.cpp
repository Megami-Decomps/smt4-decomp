#include "romwright_types.h"

extern "C" {

extern char s__B_B_B_B_B_B_B_B_B_B_00465728[49]; /* 0x465728 */


unsigned int FUN_0035a060(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 < 0xc) {
    temp_v0 = *(unsigned int *)(s__B_B_B_B_B_B_B_B_B_B_00465728 + param_1 * 4);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
