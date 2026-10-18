/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121b78` (_code @ 0x121b78, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00131324(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


unsigned int FUN_00121b78(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c38a4(param_1 + 4);
  temp_v0 = FUN_00131324(param_1 + 0x10,param_2,param_3);
  FUN_002c3820(param_1 + 4);
  return temp_v0;
}
