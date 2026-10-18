/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f808` (_code @ 0x15f808, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


/* WARNING: Type propagation algorithm not settling */

void FUN_0015f808(unsigned int param_1,unsigned int param_2,romwright_code *param_3)

{
/* irregular: 3 native warning(s); review required */
  int aiStack_8 [2];
  
  if ((param_2 & 0xfffffffe) != 0) {
    param_2 = param_2 + 1;
  }
  aiStack_8[-param_2] = param_2 * 4;
  (*param_3)(param_1,aiStack_8 + (1 - param_2));
                    /* WARNING: Could not recover jumptable at 0x0015f830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)((int)aiStack_8 + aiStack_8[-param_2] + param_2 * -4 + 4))();
  return;
}
