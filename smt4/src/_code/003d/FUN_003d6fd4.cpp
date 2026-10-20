#include "romwright_types.h"

extern "C" {

int FUN_00297468(unsigned int, int, int);

/* Supplied declaration required: FUN_00297468. */


void FUN_003d6fd4(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x730) == 0) {
    FUN_00297468(param_2,param_1 + 0x734,0);
    return;
  }
  return;
}

} /* extern "C" */
