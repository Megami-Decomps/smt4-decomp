#include "romwright_types.h"

extern "C" {

int FUN_001003ea(int, int, int);
int FUN_001028f4(int, int, int);

/* Supplied declaration required: FUN_001003ea. */
/* Supplied declaration required: FUN_001028f4. */


unsigned int FUN_001003bc(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_001028f4(param_1,param_2,param_3);
  }
  else {
    FUN_001003ea(param_1,param_2,param_3);
  }
  return 1;
}

} /* extern "C" */
