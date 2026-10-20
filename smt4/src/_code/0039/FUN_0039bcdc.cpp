#include "romwright_types.h"

extern "C" {

int FUN_002bd8e8(int, int, int);

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0039bcdc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x9ed) = 1;
  FUN_002bd8e8(param_1 + 0x9f8,6,0);
  return;
}

} /* extern "C" */
