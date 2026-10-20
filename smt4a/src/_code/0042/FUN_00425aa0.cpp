#include "romwright_types.h"

extern "C" {

int FUN_001bcd48(int, int);

/* Supplied declaration required: FUN_001bcd48. */


void FUN_00425aa0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001bcd48(500000,0);
  return;
}

} /* extern "C" */
