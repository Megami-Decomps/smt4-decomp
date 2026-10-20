/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508384` (_code @ 0x508384, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_005083a0(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Supplied declaration required: FUN_005083a0. */


void FUN_00508384(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_005083a0(param_1,0x4001);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
