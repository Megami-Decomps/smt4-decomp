/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010701c` (_code @ 0x10701c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00115728(int);
/* Supplied declaration required: FUN_002e9e60. */


unsigned int FUN_0010701c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_3 != 0) {
    temp_v0 = **(int **)(param_1 + 0x44);
    if ((unsigned int)(((*(int **)(param_1 + 0x44))[1] - temp_v0) >> 2) <= param_3) {
      FUN_002e9e60("D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      return 0xffffffff;
    }
    param_1 = *(int *)(temp_v0 + param_3 * 4);
  }
  else {
    param_1 = param_1 + 4;
  }
  temp_v1 = FUN_00115728(param_1);
  return temp_v1;
}
