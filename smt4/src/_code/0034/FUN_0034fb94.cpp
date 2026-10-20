#include "romwright_types.h"

extern "C" {

int FUN_002c3424(int);
int FUN_003511cc(int);

/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: FUN_003511cc. */


void FUN_0034fb94(int param_1)

{
/* irregular: 2 native warning(s); review required */
  while (FUN_002c3424(param_1 + 0x20), *(char *)(param_1 + 0x10) != '\x01') {
    FUN_003511cc(param_1);
  }
  return;
}

} /* extern "C" */
