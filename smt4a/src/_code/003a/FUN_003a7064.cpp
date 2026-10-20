#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_003a7064(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    param_1 = *(int **)(temp_v0 + 0x328);
  }
  if ((temp_v0 != 0 && param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_0019a5a0();
    **(unsigned int **)(temp_v0 + 0x328) = 0;
  }
  return;
}

} /* extern "C" */
