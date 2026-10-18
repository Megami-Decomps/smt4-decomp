/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b40c` (_code @ 0x37b40c, 0x158 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00235eec. */
/* Supplied declaration required: FUN_002c5ff4. */
/* Supplied declaration required: FUN_0037a5dc. */


int * FUN_0037b40c(int *param_1,unsigned int param_2,int *param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v0 = param_1[0x15];
  if (temp_v0 != 0) {
    param_4 = param_1[0x16];
  }
  if (temp_v0 == 0 || param_4 == 0) {
    FUN_0037a5dc(param_1);
    return param_1;
  }
  temp_v1 = param_1[0x17];
  piVar3 = param_3;
  if (-1 < temp_v1) {
    piVar3 = (int *)param_1[0x18];
  }
  if ((-1 < temp_v1 && temp_v1 <= (int)piVar3) &&
     ((unsigned int)((int)piVar3 + (int)param_3) <= (unsigned int)(temp_v1 + param_4))) {
    FUN_002c5ff4(param_2,(int)piVar3 + (temp_v0 - temp_v1),param_3);
    param_1[0x18] = param_1[0x18] + (int)param_3;
    return param_3;
  }
  temp_v1 = param_1[0x10];
  temp_v0 = param_1[0x18] + temp_v1;
  if ((temp_v0 < temp_v1) || (temp_v1 = temp_v1 + param_1[0x11], temp_v1 < temp_v0)) {
    temp_v0 = temp_v1;
  }
  FUN_00235eec(param_1 + 0xe,temp_v0,0);
  temp_v0 = (**(romwright_code **)(*param_1 + 0x54))(param_1);
  param_1[0x17] = temp_v0;
  piVar3 = param_1;
  if ((int *)param_1[0x16] >= param_3) {
    FUN_0037a5dc(param_1,param_1[0x15]);
    if (-1 < (int)piVar3) {
      FUN_002c5ff4(param_2,param_1[0x15],param_3);
      param_1[0x18] = param_1[0x18] + (int)param_3;
      return param_3;
    }
  }
  else {
    FUN_0037a5dc(param_1,param_2,param_3);
    if (-1 < (int)piVar3) {
      FUN_002c5ff4(param_1[0x15],param_2,param_1[0x16]);
      param_1[0x18] = param_1[0x18] + (int)param_3;
      return param_3;
    }
  }
  param_1[0x17] = -1;
  return piVar3;
}
