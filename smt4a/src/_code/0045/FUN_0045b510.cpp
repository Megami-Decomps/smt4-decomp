#include "romwright_types.h"

extern "C" {

int FUN_00442c5c(...);

/* Supplied declaration required: FUN_00442c5c. */


int FUN_0045b510(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00442c5c();
  temp_v0 = FUN_00442c5c(temp_v0 + 4);
  temp_v0 = FUN_00442c5c(temp_v0 + 4);
  temp_v0 = FUN_00442c5c(temp_v0 + 4);
  return temp_v0 - 0xc;
}

} /* extern "C" */
