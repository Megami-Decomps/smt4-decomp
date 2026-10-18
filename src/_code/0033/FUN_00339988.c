/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339988` (_code @ 0x339988, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0029a2b0. */


void FUN_00339988(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x4398) != 0) {
    FUN_0029a2b0(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),0);
    FUN_0028c880(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),0);
    return;
  }
  return;
}
