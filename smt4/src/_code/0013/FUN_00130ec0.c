/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00130ec0` (_code @ 0x130ec0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd430. */


int FUN_00130ec0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(param_1 + temp_v0 * 4) != 0) {
      FUN_002bd430();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return param_1;
}
