/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcd44` (_code @ 0x2bcd44, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00127fac. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_002bcd44(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00127fac();
  if (param_1 < 0) {
    FUN_002c526c();
    return;
  }
  return;
}
