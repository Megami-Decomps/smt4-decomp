/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318e08` (_code @ 0x318e08, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00226724(int, int, int, int);


unsigned int FUN_00318e08(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int temp_v0;
  
  temp_v0 = FUN_00226724(param_3,param_4,param_2,param_5);
  *param_1 = temp_v0;
  if (param_4 - param_3 >= 1) {
    if (param_4 <= temp_v0) {
      *param_1 = param_4;
      return 1;
    }
  }
  else if (temp_v0 <= param_4) {
    *param_1 = param_4;
    return 1;
  }
  if (param_5 != param_2) {
    return 0;
  }
  *param_1 = param_4;
  return 1;
}
