/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9560` (_code @ 0x4d9560, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_004d9560(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1[4] != 0) {
    (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    param_1[4] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004d959c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x14))(param_1);
  return;
}

} /* extern "C" */
