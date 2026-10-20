#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_001acf98(int, int);

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_001acf98. */


void FUN_004ac06c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0014384c(0xc);
  FUN_0014384c(0xd);
  temp_v0 = 0;
  do {
    FUN_001acf98(0xc,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 6);
  temp_v0 = 0;
  do {
    FUN_001acf98(0xd,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  return;
}

} /* extern "C" */
