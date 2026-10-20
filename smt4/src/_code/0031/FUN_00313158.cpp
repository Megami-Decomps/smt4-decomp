#include "romwright_types.h"

extern "C" {

extern int DAT_00434210; /* 0x434210 */


unsigned int FUN_00313158(int param_1)

{
  unsigned int temp_v0;
  
  if ((DAT_00434210 == 0) || (*(int *)(DAT_00434210 + 0x2f8) != param_1)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
