/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356f80` (_code @ 0x356f80, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00262b28. */
/* Supplied declaration required: FUN_002b2520. */


void FUN_00356f80(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00262b28(*(unsigned int *)(param_1 + 4));
  *(unsigned int *)(param_1 + 4) = 0;
  FUN_002b2520(param_1);
  return;
}
