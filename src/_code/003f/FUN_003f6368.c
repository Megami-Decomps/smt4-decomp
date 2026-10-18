/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6368` (_code @ 0x3f6368, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_0044e964; /* 0x44e964 */


void FUN_003f6368(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044e964 != (romwright_code *)0x0 && param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      (*DAT_0044e964)();
    }
                    /* WARNING: Could not recover jumptable at 0x003f639c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e964)(param_1);
    return;
  }
  return;
}
