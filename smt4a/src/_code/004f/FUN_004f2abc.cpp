#include "romwright_types.h"

extern "C" {

int FUN_002804b0(unsigned int, int, int);

/* Supplied declaration required: FUN_002804b0. */


void FUN_004f2abc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x65c) == 0) {
    FUN_002804b0(param_2,param_1 + 0x65c,1);
    return;
  }
  return;
}

} /* extern "C" */
