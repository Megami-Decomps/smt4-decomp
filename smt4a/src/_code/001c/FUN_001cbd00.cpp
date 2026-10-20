#include "romwright_types.h"

extern "C" {

int FUN_001d1a34(int, unsigned int);

/* Supplied declaration required: FUN_001d1a34. */


void FUN_001cbd00(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 8)) {
    do {
      temp_v0 = *(int *)(param_1 + temp_v1 * 4);
      if (temp_v0 != 0) {
        FUN_001d1a34(temp_v0,param_2);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 8));
  }
  *(char *)(param_1 + 0x23) = (char)param_2;
  return;
}

} /* extern "C" */
