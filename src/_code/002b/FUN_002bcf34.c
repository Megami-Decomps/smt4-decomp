/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcf34` (_code @ 0x2bcf34, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00127ed0. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_002bcf34(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00127ed0();
  if (param_1 < 0) {
    FUN_002c5468();
    return;
  }
  return;
}
