#include "romwright_types.h"

extern "C" {

int FUN_002e9318(int);

/* Supplied declaration required: FUN_002e9318. */


void FUN_0030af1c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e9318(param_1 + 8);
  FUN_002e9318(temp_v0 - 8);
  return;
}

} /* extern "C" */
