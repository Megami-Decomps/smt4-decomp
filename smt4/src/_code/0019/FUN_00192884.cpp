#include "romwright_types.h"

extern "C" {

int FUN_002a5ed0(int, int);
int FUN_002c4c2c(int);

/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002c4c2c. */


void FUN_00192884(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002c4c2c(0x1d);
  temp_v0 = 0;
  do {
    FUN_002a5ed0(0x1d,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}

} /* extern "C" */
