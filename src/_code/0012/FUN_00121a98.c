/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121a98` (_code @ 0x121a98, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00131248(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_00121a98(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c3aa8(param_1 + 4);
  temp_v0 = FUN_00131248(param_1 + 0x10,param_2,param_3);
  FUN_002c3a24(param_1 + 4);
  return temp_v0;
}
