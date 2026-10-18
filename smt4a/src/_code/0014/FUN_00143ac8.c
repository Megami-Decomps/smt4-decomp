/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00143ac8` (_code @ 0x143ac8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00143ac8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0019a5a0();
  }
  FUN_0019a5a0(param_1);
  return;
}
