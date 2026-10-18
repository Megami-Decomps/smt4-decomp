/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab058` (_code @ 0x3ab058, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_003aceb4. */
/* Supplied declaration required: FUN_003ad390. */


void FUN_003ab058(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if ((int *)param_1[0x164] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x164] + 4))();
    param_1[0x164] = 0;
  }
  FUN_003aceb4();
  FUN_003ad390();
  (**(romwright_code **)(*param_1 + 0x28))(param_1);
  FUN_002c43b4(param_1[1],0);
  return;
}
