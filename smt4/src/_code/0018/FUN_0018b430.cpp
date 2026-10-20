#include "romwright_types.h"

extern "C" {

int FUN_002a0d4c(int, int);

/* Supplied declaration required: FUN_002a0d4c. */


unsigned int FUN_0018b430(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002a0d4c(param_1,0xb);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

} /* extern "C" */
