#include "romwright_types.h"

extern "C" {

int FUN_003fdae8(unsigned int);

/* Supplied declaration required: FUN_003fdae8. */


void FUN_00400d68(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_003fdae8(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 4));
    return;
  }
  return;
}

} /* extern "C" */
