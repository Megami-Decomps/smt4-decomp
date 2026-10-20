/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001757d0` (_code @ 0x1757d0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001afdc4(void);

/* Supplied declaration required: FUN_001afdc4. */


int FUN_001757d0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(param_1 + temp_v0 * 4) != 0) {
      FUN_001afdc4();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return param_1;
}

} /* extern "C" */
