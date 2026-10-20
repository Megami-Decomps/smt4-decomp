#include "romwright_types.h"

extern "C" {

int FUN_002e6dd4(int, int);

/* Supplied declaration required: FUN_002e6dd4. */


void FUN_0048b250(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e6dd4(param_1 + 0x3e6,0xa0);
  return;
}

} /* extern "C" */
