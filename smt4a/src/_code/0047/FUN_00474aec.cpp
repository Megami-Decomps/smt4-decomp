#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);
int FUN_002371cc(void);

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002371cc. */


void FUN_00474aec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002371cc();
    FUN_0019a5a0(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
