/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124c70` (_code @ 0x124c70, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b712(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0011b712. */


void FUN_00124c70(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011b712(param_1 - 0x10);
  return;
}

} /* extern "C" */
