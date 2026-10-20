#include "romwright_types.h"

extern "C" {

int FUN_00233670(int, int, int, int);

/* Supplied declaration required: FUN_00233670. */


void FUN_0022b03c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00233670(param_1 + 0x74,0x2a,5,10);
  *(unsigned char *)(param_1 + 0x84) = 1;
  return;
}

} /* extern "C" */
