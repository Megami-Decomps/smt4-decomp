/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001100cc` (_code @ 0x1100cc, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c12e0. */
/* Supplied declaration required: FUN_002c130c. */


void FUN_001100cc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 == 2) {
      FUN_002c130c(1);
      return;
    }
    return;
  }
  FUN_002c130c();
  FUN_002c12e0(param_1);
  return;
}
