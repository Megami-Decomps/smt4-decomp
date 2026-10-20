#include "romwright_types.h"

extern "C" {

int FUN_0028975c(int, int, int);

/* Supplied declaration required: FUN_0028975c. */


void FUN_00273f5c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_0028975c(temp_v0 + 0x310,0,1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
