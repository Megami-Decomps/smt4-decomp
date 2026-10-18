/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115728` (_code @ 0x115728, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9e60. */


unsigned int FUN_00115728(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 >= 0xe) {
    FUN_002e9e60("D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstantiationContext.h"
                 ,0x52,0xe0000003,0);
    return 0xffffffff;
  }
  return *(unsigned int *)(param_2 * 4 + param_1 + 4);
}
