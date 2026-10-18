/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232c00` (_code @ 0x232c00, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_00395774. */
/* Supplied declaration required: FUN_00396090. */
/* Supplied declaration required: FUN_00396490. */


unsigned int FUN_00232c00(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x10) >= 0x10) {
    return 0;
  }
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 4;
    if (*(int *)(temp_v0 + 0x18) == 0) break;
    if (*(int *)(temp_v0 + 0x1c) == 0) {
      temp_v1 = temp_v1 + 1;
      break;
    }
    temp_v1 = temp_v1 + 2;
  } while (temp_v1 < 0x20);
  if (param_2 != 0) {
    if (param_2 == 1) {
      temp_v0 = 0x9c;
      FUN_002c23f8();
      if (temp_v0 != 0) {
        FUN_00396490();
      }
      *(int *)(param_1 + temp_v1 * 4 + 0x18) = temp_v0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) >= 4) {
      return 0;
    }
    temp_v0 = 0x80;
    FUN_002c23f8();
    if (temp_v0 != 0) {
      FUN_00395774();
    }
    *(int *)(param_1 + temp_v1 * 4 + 0x18) = temp_v0;
  }
  temp_v1 = param_1 + temp_v1 * 4;
  FUN_00396090(*(unsigned int *)(temp_v1 + 0x18),param_3);
  (**(romwright_code **)(**(int **)(temp_v1 + 0x18) + 8))();
  (**(romwright_code **)(**(int **)(*(int *)(temp_v1 + 0x18) + 0x68) + 8))();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return *(unsigned int *)(temp_v1 + 0x18);
}
