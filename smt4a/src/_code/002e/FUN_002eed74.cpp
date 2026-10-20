#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);

/* Supplied declaration required: FUN_002e7232. */


void FUN_002eed74(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002e7232();
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

} /* extern "C" */
