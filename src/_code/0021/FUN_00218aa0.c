/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00218aa0` (_code @ 0x218aa0, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002983dc. */
/* Supplied declaration required: FUN_002bdac0. */


void FUN_00218aa0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x3048) != 0) {
    FUN_002983dc(param_1,0x27,1);
    FUN_002bdac0(param_1 + 0x12b8,9,0);
    return;
  }
  return;
}
