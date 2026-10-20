#include "romwright_types.h"

extern "C" {

int FUN_003e5b1c(void);
int FUN_003e5b9c(void);

/* Supplied declaration required: FUN_003e5b1c. */
/* Supplied declaration required: FUN_003e5b9c. */


void FUN_00281720(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_003e5b9c();
    return;
  }
  FUN_003e5b1c();
  return;
}

} /* extern "C" */
