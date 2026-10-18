/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f341c` (_code @ 0x2f341c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002572dc. */
/* Supplied declaration required: FUN_0025733c. */
/* Supplied declaration required: FUN_00257390. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002f341c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_0025733c();
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_00257390();
  }
  FUN_002572dc(*(unsigned int *)(param_1 + 0x13c));
  FUN_002c4360(param_1);
  return;
}
