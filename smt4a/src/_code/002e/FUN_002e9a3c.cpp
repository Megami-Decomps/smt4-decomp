#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(int);

/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */


void FUN_002e9a3c(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 4);
  if (param_3 != 0) {
    _ZN9Obj55aff4D1Ev(param_2 + 0x10);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

} /* extern "C" */
