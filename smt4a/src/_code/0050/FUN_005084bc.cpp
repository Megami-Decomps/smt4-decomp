/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005084bc` (_code @ 0x5084bc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_005083a0(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Supplied declaration required: FUN_005083a0. */


unsigned int FUN_005084bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_005083a0(param_1,0x4001);
                    /* WARNING: Treating indirect jump as return */
  return *(unsigned int *)(param_1 + 4);
}

} /* extern "C" */
