#include "romwright_types.h"

extern "C" {

int FUN_0035b0a4(int);

/* Supplied declaration required: FUN_0035b0a4. */


void FUN_003f2594(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_0035b0a4(temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  return;
}

} /* extern "C" */
