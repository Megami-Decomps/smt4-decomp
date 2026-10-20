#include "romwright_types.h"

extern "C" {

int FUN_004188d4(void);

/* Supplied declaration required: FUN_004188d4. */


void FUN_0040afcc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_004188d4();
    return;
  }
  return;
}

} /* extern "C" */
