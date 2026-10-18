/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125100` (_code @ 0x125100, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bc2c4. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_002c5b04. */


unsigned int FUN_00125100(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  temp_v0 = param_1[2];
  if (temp_v0 != 0) {
    if ((temp_v0 != 1) && (temp_v0 == 99)) {
      FUN_002c45b8(*param_1,0);
    }
  }
  else {
    FUN_002c5b04(0);
    FUN_002c5ab8(0);
    FUN_002bc2c4();
    param_1[2] = param_1[2] + 1;
  }
  return 0;
}
