/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b354` (_code @ 0x37b354, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00235d54. */


void FUN_0037b354(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1[0x15] != 0) {
    temp_v0 = param_1[0x16];
  }
  if (param_1[0x15] != 0 && temp_v0 != 0) {
    if (param_3 == 0) {
      param_1[0x18] = param_2;
    }
    else {
      if (param_3 == 1) {
        param_2 = param_1[0x18] + param_2;
      }
      else {
        if (param_3 != 2) {
          return;
        }
        temp_v0 = (**(romwright_code **)(*param_1 + 0x3c))(param_1);
        param_2 = temp_v0 - param_2;
      }
      param_1[0x18] = param_2;
    }
    return;
  }
  if (param_3 == 0) {
    temp_v0 = param_1[0x10];
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      param_2 = (param_1[0x10] + param_1[0x11]) - param_2;
      temp_v0 = param_1[0x10];
      if ((param_2 < temp_v0) || (temp_v0 = temp_v0 + param_1[0x11], temp_v0 < param_2)) {
        param_2 = temp_v0;
      }
      FUN_00235d54(param_1 + 0xe,param_2,0);
      return;
    }
    temp_v0 = param_1[0xf];
  }
  param_2 = param_2 + temp_v0;
  temp_v0 = param_1[0x10];
  if ((param_2 < temp_v0) || (temp_v0 = temp_v0 + param_1[0x11], temp_v0 < param_2)) {
    param_2 = temp_v0;
  }
  FUN_00235d54(param_1 + 0xe,param_2,0);
  return;
}
