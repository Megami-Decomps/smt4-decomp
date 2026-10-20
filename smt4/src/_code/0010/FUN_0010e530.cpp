#include "romwright_types.h"

extern "C" {

int FUN_002bc9cc(...);

/* Supplied declaration required: FUN_002bc9cc. */


unsigned int FUN_0010e530(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = *(int *)(param_1 + 4);
  do {
    if (*(int *)(temp_v1 + temp_v0 * 4) != 0) {
      FUN_002bc9cc();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  FUN_002bc9cc(*(unsigned int *)(temp_v1 + 0x80));
  FUN_002bc9cc(*(unsigned int *)(temp_v1 + 0x84));
  return 0;
}

} /* extern "C" */
