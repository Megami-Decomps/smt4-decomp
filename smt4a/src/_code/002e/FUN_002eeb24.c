/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeb24` (_code @ 0x2eeb24, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9e60. */


unsigned int FUN_002eeb24(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_3 >= 0xe) {
    temp_v1 = 0xe0000003;
    temp_v0 = 0x3e;
  }
  else {
    param_1 = param_3 * 4 + param_1;
    if (*(int *)(param_1 + 4) == 0) {
      *(unsigned int *)(param_1 + 4) = param_2;
      return 1;
    }
    temp_v1 = 0xe000000f;
    temp_v0 = 0x44;
  }
  FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstantiationContext.cpp"
               ,temp_v0,temp_v1,0);
  return 0;
}
