/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeb5c` (_code @ 0x2eeb5c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9e60. */


unsigned int FUN_002eeb5c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_3 >= 0xe) {
    FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstantiationContext.cpp"
                 ,0x55,0xe0000003,0);
    return 0;
  }
  *(unsigned int *)(param_3 * 4 + param_1 + 4) = 0;
  return 1;
}
