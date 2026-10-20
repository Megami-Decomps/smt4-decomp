#include "romwright_types.h"

extern "C" {

int FUN_0015f1ac(int);

/* Supplied declaration required: FUN_0015f1ac. */


void FUN_0015efec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0015f1ac(param_1);
    return;
  }
  return;
}

} /* extern "C" */
