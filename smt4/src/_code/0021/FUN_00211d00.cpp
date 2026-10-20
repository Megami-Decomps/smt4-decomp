#include "romwright_types.h"

extern "C" {

int FUN_002c4c2c(int);
int FUN_002c58c8(int, int);

extern signed char DAT_0043dc70; /* 0x43dc70 */

/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_00211d00(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043dc70 <= 0) {
    FUN_002c4c2c(0x13);
    temp_v0 = 0;
    do {
      FUN_002c58c8(0x13,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
  }
  DAT_0043dc70 = DAT_0043dc70 + '\x01';
  return;
}

} /* extern "C" */
