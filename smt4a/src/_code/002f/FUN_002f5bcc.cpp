/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5bcc` (_code @ 0x2f5bcc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9e60(...);
int rt_memcpy(...);

/* Supplied declaration required: FUN_002e9e60. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_002f5bcc(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_3 != 0) {
    temp_v1 = *(unsigned int *)(param_1 + 4);
    temp_v0 = temp_v1;
    if (param_4 != 0xffffffff) {
      temp_v0 = param_4;
    }
    if (temp_v1 < temp_v0) {
      temp_v1 = temp_v0 + param_3;
    }
    else if (temp_v1 < temp_v0 + param_3) {
      temp_v1 = temp_v0 + param_3;
    }
    if (temp_v1 >= 9) {
      FUN_002e9e60("D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/LiteBuffer.h"
                   ,0x4f,0xe0000019,0);
      return 0;
    }
    *(unsigned int *)(param_1 + 4) = temp_v1;
    rt_memcpy(param_1 + 8 + temp_v0);
  }
  return 1;
}

} /* extern "C" */
