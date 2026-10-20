#include "romwright_types.h"

extern "C" {

int FUN_002c6a10(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002c6a10. */


void FUN_00349ee0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x10)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + temp_v0 * 4);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
      }
      piVar1 = *(int **)(*(int *)(param_1 + 4) + temp_v0 * 4);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + temp_v0 * 4);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x10));
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002c6a10();
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002c6a10();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_002c6a10();
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

} /* extern "C" */
