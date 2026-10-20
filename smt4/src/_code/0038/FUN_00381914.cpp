#include "romwright_types.h"

extern "C" {

int FUN_002907a8(void);

/* Supplied declaration required: FUN_002907a8. */


unsigned int FUN_00381914(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (((*(int *)(param_1 + 4) == 0) || (temp_v0 = FUN_002907a8(), temp_v0 < *(unsigned int *)(param_1 + 4))) ||
     (temp_v1 = FUN_002907a8(), (unsigned int)(temp_v1 - *(int *)(param_1 + 4)) >= 901)) {
    temp_v2 = 1;
  }
  else {
    temp_v2 = 0;
  }
  return temp_v2;
}

} /* extern "C" */
