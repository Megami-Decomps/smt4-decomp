#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e7232. */


unsigned int FUN_00109ec4(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    temp_v0 = (**(romwright_code **)(*param_1 + 0x14))(param_1,param_2,param_3);
    FUN_002e7232(param_2);
    return temp_v0;
  }
  return 0;
}

} /* extern "C" */
