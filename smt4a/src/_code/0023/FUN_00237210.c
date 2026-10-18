/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237210` (_code @ 0x237210, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00237210(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_0019a5a0();
    *param_1 = 0;
  }
  FUN_0019a5a0(param_1);
  return;
}
