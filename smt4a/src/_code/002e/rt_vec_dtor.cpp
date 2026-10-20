/* NON_MATCHING: romwright 0.5.0 decompilation of `rt_vec_dtor` (_code @ 0x2e5700, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

int rt_vec_dtor(int param_1,romwright_code *param_2,int param_3,int param_4)

{
  int temp_v0;
  
  if (param_4 != 0) {
    temp_v0 = param_4 * param_3 + param_1;
    do {
      temp_v0 = temp_v0 - param_3;
      (*param_2)(temp_v0);
    } while (param_1 != temp_v0);
  }
  return param_1 - 8;
}

} /* extern "C" */
