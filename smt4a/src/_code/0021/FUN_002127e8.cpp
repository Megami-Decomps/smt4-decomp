#include "romwright_types.h"

extern "C" {

int FUN_002e2b50(int, int);

/* Supplied declaration required: FUN_002e2b50. */


unsigned int FUN_002127e8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e2b50(param_1,3);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

} /* extern "C" */
