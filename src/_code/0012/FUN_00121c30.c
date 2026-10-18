/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121c30` (_code @ 0x121c30, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001313e4(int);
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


unsigned int FUN_00121c30(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c38a4(param_1 + 4);
  temp_v0 = FUN_001313e4(param_1 + 0x10);
  FUN_002c3820(param_1 + 4);
  return temp_v0;
}
