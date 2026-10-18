/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049274c` (_code @ 0x49274c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_002e132c. */


void FUN_0049274c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x1480) != 0) {
    FUN_0019a7f4(0x28);
    *(int *)(param_1 + 0x1480) = 0;
  }
  FUN_002e132c(0x28);
  return;
}
