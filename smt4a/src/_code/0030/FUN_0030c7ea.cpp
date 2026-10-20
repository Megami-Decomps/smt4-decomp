#include "romwright_types.h"

extern "C" {

int FUN_00310f64(void);

/* Supplied declaration required: FUN_00310f64. */


void FUN_0030c7ea(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 4) = param_2;
  FUN_00310f64();
  return;
}

} /* extern "C" */
