/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038eca0` (_code @ 0x38eca0, 0x14c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00233ac0. */
extern int FUN_00276550(void);
/* Supplied declaration required: FUN_0027ec30. */
/* Supplied declaration required: FUN_0027ec98. */
/* Supplied declaration required: FUN_0027eda0. */
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_002bc200. */


void FUN_0038eca0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 8);
  temp_v2 = param_1 + 0x11b0;
  if (temp_v1 == 0) {
    FUN_0027ec98(temp_v2,100,1,0);
    FUN_00233ac0(param_1,0,1);
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 8) = temp_v0;
    return;
  }
  if (temp_v1 != 1) {
    if ((temp_v1 == 2) && (*(char *)(param_1 + 0x167a) != '\0')) {
      FUN_0027eda0(temp_v2);
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
    }
  }
  else if (*(char *)(param_1 + 0x167a) != '\0') {
    temp_v1 = FUN_0027f10c();
    if (temp_v1 != 0) {
      FUN_002bc200(0x100016d);
      FUN_00233ac0(param_1,0xffffffff,0);
      FUN_0027ec30(temp_v2);
      temp_v0 = 2;
      *(unsigned int *)(param_1 + 8) = temp_v0;
      return;
    }
    temp_v1 = FUN_00276550();
    if (temp_v1 != 0) {
      FUN_002bc200(0x100016d);
      *(unsigned int *)(param_1 + 4) = 0xf;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
      FUN_0027ec30(temp_v2);
      return;
    }
  }
  return;
}
