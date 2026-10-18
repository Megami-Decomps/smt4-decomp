/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6140` (_code @ 0x3e6140, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002acbd8. */


void FUN_003e6140(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e615c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(**(int **)(param_1 + 0xc) + 0x14))();
    return;
  }
  FUN_002acbd8();
  return;
}
