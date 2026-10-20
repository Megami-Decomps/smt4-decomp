#include "romwright_types.h"

extern "C" {

int FUN_002efd36(unsigned int);

/* Supplied declaration required: FUN_002efd36. */


void FUN_0030bf3a(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002efd36(param_3);
  return;
}

} /* extern "C" */
