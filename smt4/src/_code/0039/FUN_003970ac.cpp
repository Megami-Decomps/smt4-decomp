/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003970ac` (_code @ 0x3970ac, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_003970ac. */


void FUN_003970ac(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  if (param_2 != param_1 + 2) {
    FUN_003970ac(param_1,(unsigned int *)*param_2);
    FUN_003970ac(param_1,(unsigned int *)param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x003970f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)*param_1)(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
