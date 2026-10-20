#include "romwright_types.h"

extern "C" {

int FUN_00139650(void);

/* Supplied declaration required: FUN_00139650. */


void nn_os_CriticalSection_Leave(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8) - 1;
  *(int *)(param_1 + 8) = temp_v0;
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    FUN_00139650();
    return;
  }
  return;
}

} /* extern "C" */
