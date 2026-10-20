#include "romwright_types.h"

extern "C" {

int FUN_00182540(unsigned int);

/* Supplied declaration required: FUN_00182540. */


void FUN_0016cae0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int unaff_r5;
  int temp_v0;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    unaff_r5 = 0;
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_00182540(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + unaff_r5 * 4) + 0xc));
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < *(int *)(param_1 + 0x14));
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (temp_v0 = 0, 0 < *(int *)(param_1 + 0x1c))) {
    do {
      FUN_00182540(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x20) + temp_v0 * 4) + 0xc));
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x1c));
  }
  return;
}

} /* extern "C" */
