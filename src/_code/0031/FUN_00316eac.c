/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316eac` (_code @ 0x316eac, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0ba8. */


unsigned int FUN_00316eac(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((param_1 == 0) || (temp_v0 = FUN_002c0ba8(), temp_v0 != 0)) &&
     ((param_2 == 0 || (temp_v0 = FUN_002c0ba8(param_2), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}
