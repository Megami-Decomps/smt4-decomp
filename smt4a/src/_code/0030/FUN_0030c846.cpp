#include "romwright_types.h"

extern "C" {

int FUN_00310f64(void);

/* Supplied declaration required: FUN_00310f64. */


void FUN_0030c846(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x14) = param_4;
  *(unsigned int *)(param_1 + 0x10) = param_3;
  FUN_00310f64();
  return;
}

} /* extern "C" */
