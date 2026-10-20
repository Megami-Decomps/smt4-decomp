#include "romwright_types.h"

extern "C" {

int FUN_00167c14(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_00167c14. */


void FUN_004d03c8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00167c14(param_1,param_2,1);
  return;
}

} /* extern "C" */
