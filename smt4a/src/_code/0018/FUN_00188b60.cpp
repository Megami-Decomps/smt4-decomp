#include "romwright_types.h"

extern "C" {

int FUN_001af264(void);

/* Supplied declaration required: FUN_001af264. */


void FUN_00188b60(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001af264();
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
