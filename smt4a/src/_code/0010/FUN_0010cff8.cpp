#include "romwright_types.h"

extern "C" {

int FUN_002f6eda(unsigned int);

/* Supplied declaration required: FUN_002f6eda. */


void FUN_0010cff8(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f6eda(*param_2);
  return;
}

} /* extern "C" */
