#include "romwright_types.h"

extern "C" {

int FUN_001d1438(int);

/* Supplied declaration required: FUN_001d1438. */


void FUN_004b9680(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001d1438(param_1 + 0x42);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x10;
  return;
}

} /* extern "C" */
