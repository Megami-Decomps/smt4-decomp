#include "romwright_types.h"

extern "C" {

int FUN_004d9168(int *, int);

/* Supplied declaration required: FUN_004d9168. */


void FUN_004d90dc(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  FUN_004d9168(param_1,*param_1);
  piVar1 = param_1 + 1;
  param_1[3] = (int)piVar1;
  *param_1 = (int)piVar1;
  param_1[6] = (int)piVar1;
  param_1[7] = 0;
  param_1[5] = (int)piVar1;
  return;
}

} /* extern "C" */
