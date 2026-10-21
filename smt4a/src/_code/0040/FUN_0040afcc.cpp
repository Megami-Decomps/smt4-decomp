#include "romwright_types.h"

extern "C" {

int valueClear(void);

/* Supplied declaration required: valueClear. */


void FUN_0040afcc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x3c) != 0) {
    valueClear();
    return;
  }
  return;
}

} /* extern "C" */
