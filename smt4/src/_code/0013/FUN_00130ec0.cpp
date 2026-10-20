#include "romwright_types.h"

extern "C" {

int FUN_002bd430(void);

/* Supplied declaration required: FUN_002bd430. */


int FUN_00130ec0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(param_1 + temp_v0 * 4) != 0) {
      FUN_002bd430();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return param_1;
}

} /* extern "C" */
