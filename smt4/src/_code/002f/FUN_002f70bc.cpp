#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_00247004(unsigned int);
extern int btlUnitGet(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_002f70bc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlUnitGet(*param_1);
  temp_v0 = FUN_00247004(*(unsigned int *)(temp_v0 + 0x20));
  if (temp_v0 != 0) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
