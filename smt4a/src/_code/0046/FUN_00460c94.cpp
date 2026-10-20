/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460c94` (_code @ 0x460c94, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


void FUN_00460c94(int *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1[6] != 0) {
    temp_v0 = param_1[7];
  }
  if (param_1[6] != 0 && temp_v0 != 0) {
    if (param_3 == 0) {
      param_1[9] = param_2;
    }
    else {
      if (param_3 == 1) {
        param_2 = param_1[9] + param_2;
      }
      else {
        if (param_3 != 2) {
          return;
        }
        temp_v0 = (**(romwright_code **)(*param_1 + 0x3c))(param_1);
        param_2 = temp_v0 - param_2;
      }
      param_1[9] = param_2;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00460d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],param_2);
  return;
}

} /* extern "C" */
