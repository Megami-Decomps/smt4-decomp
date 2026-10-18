/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338748` (_code @ 0x338748, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00338748(int param_1)

{
/* irregular: 1 native warning(s); review required */
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x5c11b0))(*(unsigned int *)(param_1 + 0x3c));
  FUN_0019a5a0(param_1);
  return;
}
