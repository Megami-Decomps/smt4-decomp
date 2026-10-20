/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003deedc` (_code @ 0x3deedc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_003deedc(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(*param_1 + 0x28);
  if (param_4 >= temp_v0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = temp_v0 - param_4;
    if (param_3 <= temp_v0) {
      temp_v0 = param_3;
    }
    rt_memcpy(param_2,*(int *)(*param_1 + 0x24) + param_4 * 2,temp_v0 << 1);
  }
  return temp_v0;
}

} /* extern "C" */
