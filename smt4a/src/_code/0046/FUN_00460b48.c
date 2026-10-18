/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460b48` (_code @ 0x460b48, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_00460b48(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = param_1[6];
  if (temp_v0 != 0) {
    param_4 = param_1[7];
  }
  if (temp_v0 == 0 || param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00460bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    temp_v2 = (**(romwright_code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_2);
    return temp_v2;
  }
  temp_v1 = param_1[8];
  temp_v2 = param_3;
  if (-1 < temp_v1) {
    temp_v2 = param_1[9];
  }
  if ((-1 < temp_v1 && temp_v1 <= (int)temp_v2) && (temp_v2 + param_3 <= (unsigned int)(temp_v1 + param_4))) {
    rt_memcpy(param_2,(temp_v2 - temp_v1) + temp_v0,param_3);
    param_1[9] = param_1[9] + param_3;
    return param_3;
  }
  (**(romwright_code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],param_1[9],0);
  temp_v0 = (**(romwright_code **)(*param_1 + 0x54))(param_1);
  param_1[8] = temp_v0;
  if ((unsigned int)param_1[7] >= param_3) {
    temp_v2 = (**(romwright_code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_1[6]);
    if (-1 < (int)temp_v2) {
      rt_memcpy(param_2,param_1[6],param_3);
      param_1[9] = param_1[9] + param_3;
      return param_3;
    }
  }
  else {
    temp_v2 = (**(romwright_code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_2,param_3);
    if (-1 < (int)temp_v2) {
      rt_memcpy(param_1[6],param_2,param_1[7]);
      param_1[9] = param_1[9] + param_3;
      return param_3;
    }
  }
  param_1[8] = -1;
  return temp_v2;
}
