/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034fba4` (_code @ 0x34fba4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


void FUN_0034fba4(unsigned int param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  (**(romwright_code **)*param_3)(param_3);
                    /* WARNING: Could not recover jumptable at 0x0034fbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_2 + 4))(param_2,param_3);
  return;
}
