/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00512ebc` (_code @ 0x512ebc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_0058950c; /* 0x58950c */


void FUN_00512ebc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0058950c == (romwright_code *)0x0 || param_1 == (int *)0x0) {
    return;
  }
  if (param_1[3] != 0) {
    (*DAT_0058950c)();
  }
  if (*param_1 != 0) {
    (*DAT_0058950c)();
  }
                    /* WARNING: Could not recover jumptable at 0x00512f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0058950c)(param_1);
  return;
}
