#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int FUN_002371cc(void);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002371cc. */


void FUN_00474aec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002371cc();
    asdMemFree(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
