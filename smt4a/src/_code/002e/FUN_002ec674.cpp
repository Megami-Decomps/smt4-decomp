#include "romwright_types.h"

extern "C" {

extern int FUN_002fc046(int);


unsigned int FUN_002ec674(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002fc046(param_1 + 0xc);
  if (temp_v0 != 0) {
    return 0;
  }
  return *(unsigned int *)(param_1 + 0xc);
}

} /* extern "C" */
