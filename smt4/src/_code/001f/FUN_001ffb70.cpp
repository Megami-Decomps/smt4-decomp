/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ffb70` (_code @ 0x1ffb70, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_001ffb70(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  int uStack_18;
  
  uStack_18 = param_4;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x18))(param_1,*(romwright_code **)(*param_1 + 0x18),param_2,0);
  if ((-1 < (int)temp_v0) &&
     (temp_v0 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&uStack_18,param_3,param_4),
     (temp_v0 & 0x80000000) == 0)) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
