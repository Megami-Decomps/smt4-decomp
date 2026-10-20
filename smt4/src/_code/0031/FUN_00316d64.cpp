#include "romwright_types.h"

extern "C" {

int FUN_002c09d0(...);

/* Supplied declaration required: FUN_002c09d0. */


unsigned int FUN_00316d64(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((param_1 == 0) || (temp_v0 = FUN_002c09d0(), temp_v0 != 0)) &&
     ((param_2 == 0 || (temp_v0 = FUN_002c09d0(param_2), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
