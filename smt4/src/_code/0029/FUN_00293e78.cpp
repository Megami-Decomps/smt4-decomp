#include "romwright_types.h"

extern "C" {

int FUN_0028c640(unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_0028c640. */


void FUN_00293e78(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0028c640(*(unsigned int *)(*(int *)(param_1 + 8) + 8),0,param_2);
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v1 * 0x50 + 0x18);
    if (temp_v0 != 0) {
      FUN_0028c640(*(unsigned int *)(temp_v0 + 8),0,param_2);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}

} /* extern "C" */
