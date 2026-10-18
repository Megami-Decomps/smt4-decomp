/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a844` (_code @ 0x43a844, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_0043acac. */


void FUN_0043a844(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0043acac();
  if (param_1 < 0) {
    FUN_00195fc8();
    return;
  }
  return;
}
