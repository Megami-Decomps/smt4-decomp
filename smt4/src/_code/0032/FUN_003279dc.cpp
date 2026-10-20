#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int btlUnitGet(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003279dc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlUnitGet(*param_1);
  if (*(short *)(*(int *)(temp_v0 + 0x20) + 0x90) > 0) {
    scrSetResult(1);
  }
  else {
    scrSetResult(0 < *(short *)(*(int *)(temp_v0 + 0x20) + 0x94));
  }
  return 1;
}

} /* extern "C" */
