/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003715e4` (_code @ 0x3715e4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


void FUN_003715e4(unsigned int param_1,int *param_2,int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_3;
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + (int)param_3;
  }
  (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v0);
                    /* WARNING: Could not recover jumptable at 0x00371620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_2 + 0xc))(param_2,param_3);
  return;
}
