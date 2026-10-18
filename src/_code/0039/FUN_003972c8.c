/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003972c8` (_code @ 0x3972c8, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_003972c8. */


void FUN_003972c8(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  if (param_2 != param_1 + 2) {
    FUN_003972c8(param_1,*param_2);
    FUN_003972c8(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x0039730c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)*param_1)(param_1,param_2);
    return;
  }
  return;
}
