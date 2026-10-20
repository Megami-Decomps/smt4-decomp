#include "romwright_types.h"

extern "C" {

int FUN_0015a144(unsigned int);

/* Supplied declaration required: FUN_0015a144. */


void FUN_0015de30(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_0015a144(*(unsigned int *)(*(int *)(param_1 + temp_v0 * 4 + 0x15dc) + 0x68));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  return;
}

} /* extern "C" */
