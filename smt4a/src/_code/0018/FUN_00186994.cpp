#include "romwright_types.h"

extern "C" {

int FUN_0019e04c(unsigned int, int);

/* Supplied declaration required: FUN_0019e04c. */


void FUN_00186994(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x18)) {
    FUN_0019e04c(*(unsigned int *)(temp_v0 + 8),param_1);
  }
  return;
}

} /* extern "C" */
