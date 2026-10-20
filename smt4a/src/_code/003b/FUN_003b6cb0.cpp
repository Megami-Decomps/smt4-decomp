#include "romwright_types.h"

extern "C" {

int FUN_003ae9d8(...);

/* Supplied declaration required: FUN_003ae9d8. */


unsigned int FUN_003b6cb0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003ae9d8();
  FUN_003ae9d8(0,2);
  FUN_003ae9d8(0,3);
  return 1;
}

} /* extern "C" */
