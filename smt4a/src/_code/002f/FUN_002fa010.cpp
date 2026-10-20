#include "romwright_types.h"

extern "C" {

int FUN_0031011e(int, int);

/* Supplied declaration required: FUN_0031011e. */


void FUN_002fa010(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0031011e(param_1,*(int *)(param_1 + 0x18) + param_2);
  return;
}

} /* extern "C" */
