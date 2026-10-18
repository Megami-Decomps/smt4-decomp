/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354d0c` (_code @ 0x354d0c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002ac788. */
/* Supplied declaration required: FUN_002bbb2c. */


void FUN_00354d0c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + 4;
  FUN_002ac788();
  if (param_1 < 0) {
    FUN_002bbb2c();
    return;
  }
  return;
}
