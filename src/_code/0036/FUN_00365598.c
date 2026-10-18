/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365598` (_code @ 0x365598, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003655ec. */
/* Supplied declaration required: FUN_00370890. */


unsigned int FUN_00365598(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_1;
  FUN_00370890();
  if ((-1 < (int)temp_v0) && (*(char *)(param_1 + 0x230) == '\0')) {
    FUN_003655ec(param_1,param_2);
    temp_v0 = param_1 | temp_v0;
  }
  return temp_v0;
}
