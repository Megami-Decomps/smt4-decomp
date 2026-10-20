#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

/* Supplied declaration required: asdMemFree. */


int FUN_003c9f28(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(param_1 + temp_v0 * 4 + 0x38) != 0) {
      asdMemFree();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x38);
  return param_1;
}

} /* extern "C" */
