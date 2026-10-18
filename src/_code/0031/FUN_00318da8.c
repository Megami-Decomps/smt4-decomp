/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318da8` (_code @ 0x318da8, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bdac0. */


unsigned char FUN_00318da8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x3048) != 0x27;
  if (temp_v0) {
    FUN_002bdac0(param_1 + 0x12b8,9,0);
  }
  return temp_v0;
}
