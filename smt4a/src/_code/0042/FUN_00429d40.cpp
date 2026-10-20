/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429d40` (_code @ 0x429d40, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042c2f4(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0042c2f4. */


void FUN_00429d40(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0042c2f4(param_1 + 8);
  return;
}

} /* extern "C" */
