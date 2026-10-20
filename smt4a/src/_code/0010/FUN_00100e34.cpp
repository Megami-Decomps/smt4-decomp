#include "romwright_types.h"

extern "C" {

int FUN_00100b14(int,int,int);
int FUN_00102984(int,int,int);

/* Supplied declaration required: FUN_00100b14. */
/* Supplied declaration required: FUN_00102984. */


unsigned int FUN_00100e34(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00102984(param_1,param_2,param_3);
  }
  else {
    FUN_00100b14(param_1,param_2,param_3);
  }
  return 1;
}

} /* extern "C" */
