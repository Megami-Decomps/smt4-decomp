/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8e84` (_code @ 0x3a8e84, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00291c3c. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_003aadf8. */


void FUN_003a8e84(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  if ((int *)param_1[0x164] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x164] + 4))();
    param_1[0x164] = 0;
  }
  FUN_003aadf8((int)param_1 + 0x96);
  if ((char)param_1[0x169] == '\x01') {
    FUN_00291c3c();
  }
  (**(romwright_code **)(*param_1 + 0x28))(param_1);
  FUN_002a497c(0x22);
  FUN_002c45b8(param_1[1],0);
  return;
}
