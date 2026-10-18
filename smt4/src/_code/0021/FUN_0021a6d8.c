/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a6d8` (_code @ 0x21a6d8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002570a8. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0021a6d8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_00257108();
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_0025715c();
  }
  FUN_002570a8(*(unsigned int *)(param_1 + 200));
  FUN_002c415c(param_1);
  return;
}
