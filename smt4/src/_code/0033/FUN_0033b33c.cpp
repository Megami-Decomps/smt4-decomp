#include "romwright_types.h"

extern "C" {

int FUN_002e1b3c(int);

/* Supplied declaration required: FUN_002e1b3c. */


void FUN_0033b33c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_002e1b3c(temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  return;
}

} /* extern "C" */
