/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020730c` (_code @ 0x20730c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002b24fc. */
/* Supplied declaration required: FUN_002c0a6c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0020730c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_002c0a6c();
  }
  FUN_002b24fc(*(unsigned int *)(param_1 + 0x18));
  FUN_002c4360(param_1);
  return;
}
