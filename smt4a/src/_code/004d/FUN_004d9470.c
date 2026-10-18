/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9470` (_code @ 0x4d9470, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


void FUN_004d9470(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  param_1[3] = param_1[3] - 1;
  temp_v0 = (**(romwright_code **)(*param_1 + 0xc))(param_1);
  param_1[1] = param_1[1] - temp_v0;
                    /* WARNING: Could not recover jumptable at 0x004d94b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x1c))(param_1,param_2);
  return;
}
