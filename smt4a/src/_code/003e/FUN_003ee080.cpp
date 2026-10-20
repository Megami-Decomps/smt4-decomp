#include "romwright_types.h"

extern "C" {

int FUN_0040a244(void);

/* Supplied declaration required: FUN_0040a244. */


void FUN_003ee080(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = 0;
  do {
    piVar2 = (int *)(param_1 + temp_v0 * 0x10 + 0x4d78);
    if (*piVar2 != 0) {
      FUN_0040a244();
      *piVar2 = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  return;
}

} /* extern "C" */
