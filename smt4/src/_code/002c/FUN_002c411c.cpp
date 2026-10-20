/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c411c` (_code @ 0x2c411c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5434(void);
int FUN_002c55d4(int);

extern signed char DAT_00465198; /* 0x465198 */

/* Supplied declaration required: FUN_002c5434. */
/* Supplied declaration required: FUN_002c55d4. */


int FUN_002c411c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (int)DAT_00465198;
  DAT_00465198 = (char)param_1;
  if (param_1 != 0) {
    FUN_002c5434();
  }
  else {
    FUN_002c55d4(1);
  }
  return temp_v0;
}

} /* extern "C" */
