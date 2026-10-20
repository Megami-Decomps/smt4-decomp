#include "romwright_types.h"

extern "C" {

int FUN_00145c88(unsigned int, int);

/* Supplied declaration required: FUN_00145c88. */


void FUN_00138c14(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x18)) {
    FUN_00145c88(*(unsigned int *)(temp_v0 + 8),param_1);
  }
  return;
}

} /* extern "C" */
