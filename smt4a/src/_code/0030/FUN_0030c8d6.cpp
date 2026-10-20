/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c8d6` (_code @ 0x30c8d6, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_002f4d9c(int, unsigned int);


unsigned int FUN_0030c8d6(int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0xfc))(param_1);
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_2 + 0x74);
    if (temp_v0 == 0) {
      temp_v0 = param_1[2];
    }
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_002f4d9c(temp_v0,0x73);
    if (temp_v0 == 0) {
      return 0;
    }
    *(unsigned int *)(param_2 + 0x4c) = *(unsigned int *)(temp_v0 + 0x78);
    *(int *)(param_2 + 0x48) = temp_v0;
  }
  return 1;
}

} /* extern "C" */
