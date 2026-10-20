#include "romwright_types.h"

extern "C" {

int FUN_002f73e4(int);

extern int FUN_002f73b8(void);
/* Supplied declaration required: FUN_002f73e4. */


void FUN_002eaa50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002f73b8();
  if (temp_v0 != 0) {
    FUN_002f73e4(param_1 + 4);
  }
  return;
}

} /* extern "C" */
