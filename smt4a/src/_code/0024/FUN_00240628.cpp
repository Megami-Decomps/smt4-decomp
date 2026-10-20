#include "romwright_types.h"

extern "C" {

int FUN_00184e64(...);

/* Supplied declaration required: FUN_00184e64. */


unsigned int FUN_00240628(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 < param_1) {
    FUN_00184e64(0x72e027ff);
    return 0xffffffff;
  }
  if (param_1 < param_2) {
    FUN_00184e64(0xdc0f14ff);
    return 1;
  }
  FUN_00184e64(0xffffffff);
  return 0;
}

} /* extern "C" */
