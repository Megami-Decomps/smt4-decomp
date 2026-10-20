#include "romwright_types.h"

extern "C" {

int FUN_0019c8c0(unsigned int);

/* Supplied declaration required: FUN_0019c8c0. */


void FUN_001882fc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x1c);
  temp_v1 = 0;
  if (temp_v1 < *piVar3) {
    do {
      temp_v0 = *(int *)(piVar3[1] + temp_v1 * 4);
      if ((*(unsigned int *)(temp_v0 + 4) & 2) != 0) {
        FUN_0019c8c0(*(unsigned int *)(temp_v0 + 0xc));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *piVar3);
  }
  return;
}

} /* extern "C" */
