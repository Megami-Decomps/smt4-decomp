#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_003bbc5c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlUnitGet(*param_1);
  if (*(int *)(*(int *)(temp_v0 + 0x20) + 0xac) > 0) {
    scrSetResult(1);
  }
  else {
    scrSetResult(0 < *(int *)(*(int *)(temp_v0 + 0x20) + 0xb4));
  }
  return 1;
}

} /* extern "C" */
