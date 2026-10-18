/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00455698` (_code @ 0x455698, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


void FUN_00455698(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  if (param_2 == 0) {
    return;
  }
  temp_v1 = *(int *)(param_2 + 0xc0);
  if (temp_v1 != 0) {
    temp_v0 = param_2 + 0xc0 + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v2 = temp_v1 != 0;
    if (temp_v2) {
      temp_v1 = temp_v1 + param_2 + 0xc0;
    }
    if (!temp_v2) {
      temp_v1 = 0;
    }
    (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v1);
    *(unsigned int *)(param_2 + 0xc0) = 0;
  }
  temp_v1 = *(int *)(param_2 + 0xbc);
  if (temp_v1 != 0) {
    temp_v0 = param_2 + 0xbc + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v2 = temp_v1 != 0;
    if (temp_v2) {
      temp_v1 = temp_v1 + param_2 + 0xbc;
    }
    if (!temp_v2) {
      temp_v1 = 0;
    }
    (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v1);
    *(unsigned int *)(param_2 + 0xbc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00455740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2);
  return;
}
