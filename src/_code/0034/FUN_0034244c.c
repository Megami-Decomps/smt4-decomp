/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034244c` (_code @ 0x34244c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


void FUN_0034244c(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = (**(romwright_code **)(*(int *)(param_1 + 8) + 4))(*(unsigned int *)(param_1 + 4));
  *param_3 = temp_v0;
                    /* WARNING: Could not recover jumptable at 0x00342484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*(int *)(param_1 + 8) + 8))(*(unsigned int *)(param_1 + 4),param_2);
  return;
}
