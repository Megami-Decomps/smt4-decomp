#include "romwright_types.h"

extern "C" {

int FUN_004d06e4(int);

/* Supplied declaration required: FUN_004d06e4. */


void FUN_004ba66c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x84) = 0;
  FUN_004d06e4(param_1 + 0x74);
  return;
}

} /* extern "C" */
