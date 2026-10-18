/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da180` (_code @ 0x3da180, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c4b30. */


void FUN_003da180(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4b30(param_1,200);
  FUN_002c4b30(param_1 + 200,200);
  return;
}
