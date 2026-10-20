/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ee78` (_code @ 0x10ee78, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f9f28(int *, int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002f9f28. */


unsigned int FUN_0010ee78(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if ((short)param_1[5] == 4) {
      FUN_002f9f28(param_1,8,0);
    }
    param_1[6] = param_1[6] + 1;
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
