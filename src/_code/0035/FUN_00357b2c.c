/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357b2c` (_code @ 0x357b2c, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;


int FUN_00357b2c(int *param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
  int temp_v0;
  int temp_v1 [2];
  
  temp_v0 = param_1[1];
  if (temp_v0 == 0) {
    return -0x377ef416;
  }
  if ((param_2 != 0) && (param_3 >= 0x70)) {
    temp_v1[0] = 0;
    if (param_4 != 1) {
      temp_v0 = (**(romwright_code **)(*param_1 + 0x14))(param_1,temp_v0,0,param_5,8,temp_v1,param_2,param_3);
      if (temp_v0 < 0) {
        return temp_v0;
      }
    }
    else {
      temp_v0 = (**(romwright_code **)(*param_1 + 0x14))(param_1,temp_v0,1,param_5,8,temp_v1,param_2,param_3);
      if (temp_v0 < 0) {
        return temp_v0;
      }
    }
    if (temp_v1[0] == 0) {
      temp_v0 = -0x377ef411;
    }
    else {
      temp_v0 = 0;
    }
    return temp_v0;
  }
  return -0x1f1ef403;
}
