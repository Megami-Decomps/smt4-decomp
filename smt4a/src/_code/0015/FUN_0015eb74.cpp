#include "romwright_types.h"

extern "C" {

int FUN_00197e38(...);

/* Supplied declaration required: FUN_00197e38. */


void FUN_0015eb74(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00197e38();
  FUN_00197e38(param_1 + 0xb4);
  *(unsigned char *)(param_1 + 0x18d) = 0;
  return;
}

} /* extern "C" */
