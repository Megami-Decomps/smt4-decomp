#include "romwright_types.h"

extern "C" {

extern int DAT_005710dc; /* 0x5710dc */


unsigned int FUN_003aa088(int param_1)

{
  unsigned int temp_v0;
  
  if ((DAT_005710dc == 0) || (*(int *)(DAT_005710dc + 0x2f8) != param_1)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
