#include "romwright_types.h"

extern "C" {

int FUN_002bd8e8(int, int, int);

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_001f5e9c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x218) == '\0') {
    FUN_002bd8e8(param_1 + 0x1c4,2,1);
    return;
  }
  return;
}

} /* extern "C" */
