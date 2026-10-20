/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004529b0` (_code @ 0x4529b0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


void FUN_004529b0(int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = *(int *)(param_1 + 0xc);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v0 = param_1 + 0xc + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v3 = temp_v1 != 0;
    if (temp_v3) {
      temp_v1 = temp_v1 + param_1 + 0xc;
    }
    if (!temp_v3) {
      temp_v1 = 0;
    }
    (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v1);
  }
  temp_v1 = *(int *)(param_1 + 8);
  if (temp_v1 != 0) {
    temp_v0 = param_1 + 8 + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    if (temp_v1 != 0) {
      temp_v2 = temp_v1 + param_1 + 8;
    }
    (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v2);
  }
                    /* WARNING: Could not recover jumptable at 0x00452a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_2 + 0xc))(param_2,param_1);
  return;
}

} /* extern "C" */
