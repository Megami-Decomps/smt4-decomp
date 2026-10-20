#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_003279dc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027e928(*param_1);
  if (*(short *)(*(int *)(temp_v0 + 0x20) + 0x90) > 0) {
    FUN_0028dcb0(1);
  }
  else {
    FUN_0028dcb0(0 < *(short *)(*(int *)(temp_v0 + 0x20) + 0x94));
  }
  return 1;
}

} /* extern "C" */
