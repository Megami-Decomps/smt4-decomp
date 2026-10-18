/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038fe40` (_code @ 0x38fe40, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00233ac0. */
/* Supplied declaration required: FUN_00234278. */
extern int FUN_0026f0d8(unsigned int);
/* Supplied declaration required: FUN_0027ec30. */
/* Supplied declaration required: FUN_0027ec98. */
/* Supplied declaration required: FUN_0027eda0. */
/* Supplied declaration required: FUN_002bc200. */


void FUN_0038fe40(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [20];
  
  FUN_00234278(temp_v3);
  temp_v1 = *(int *)(param_1 + 8);
  temp_v2 = param_1 + 0x11b0;
  if (temp_v1 == 0) {
    FUN_0027ec98(temp_v2,0x67,0);
    FUN_00233ac0(param_1,3,1);
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 8) = temp_v0;
    return;
  }
  if (temp_v1 != 1) {
    if ((temp_v1 == 2) && (*(char *)(param_1 + 0x167a) != '\0')) {
      FUN_0027eda0(temp_v2);
      *(unsigned int *)(param_1 + 4) = 0xf;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
    }
  }
  else if ((*(char *)(param_1 + 0x167a) != '\0') && (temp_v1 = FUN_0026f0d8(0x10), temp_v1 != 0)) {
    FUN_002bc200(0x100016d);
    FUN_0027ec30(temp_v2);
    FUN_00233ac0(param_1,0xffffffff,0);
    temp_v0 = 2;
    *(unsigned int *)(param_1 + 8) = temp_v0;
    return;
  }
  return;
}
