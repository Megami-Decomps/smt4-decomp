/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a664` (_code @ 0x12a664, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0013b434(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */


unsigned int FUN_0012a664(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bb6b8();
  temp_v0 = FUN_0013b434(1,param_1);
  FUN_002bb648();
  return temp_v0;
}
