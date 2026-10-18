/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7340` (_code @ 0x2e7340, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9e60. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_002e7340(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  if (*(unsigned int *)(param_1 + 0x10) < (unsigned int)(param_4 + param_3)) {
    FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Buffer.cpp",
                 0xdd,0xe0000019,0);
    return 0;
  }
  rt_memcpy(param_2,*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) + param_4);
  return 1;
}
