/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380c70` (_code @ 0x380c70, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002358dc. */


void FUN_00380c70(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002358dc();
  if ((*(unsigned int *)(param_1 + 0xc) & 1) == 0) {
                    /* WARNING: GHIDRA has no data in the loadimage at 0xfffffffe */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(((*(unsigned int *)(param_1 + 0xc) & 0x38) >> 3) * 4 + 0x471c20))(param_1 + 0x10);
    return;
  }
  return;
}
