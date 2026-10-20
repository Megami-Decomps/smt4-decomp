#include "romwright_types.h"

extern "C" {

int FUN_001a6f60(void);

/* Supplied declaration required: FUN_001a6f60. */


void FUN_003ef960(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2270) != 0) {
    FUN_001a6f60();
    return;
  }
  return;
}

} /* extern "C" */
