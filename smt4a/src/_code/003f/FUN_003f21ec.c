/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f21ec` (_code @ 0x3f21ec, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_004c6e24. */


void FUN_003f21ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_003eaf20();
  if (param_1 != 0) {
    FUN_004c6e24((int)*(short *)(param_1 + 8));
    return;
  }
  return;
}
