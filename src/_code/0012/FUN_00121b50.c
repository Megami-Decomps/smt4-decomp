/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121b50` (_code @ 0x121b50, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00131308(int);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_00121b50(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c3aa8(param_1 + 4);
  temp_v0 = FUN_00131308(param_1 + 0x10);
  FUN_002c3a24(param_1 + 4);
  return temp_v0;
}
