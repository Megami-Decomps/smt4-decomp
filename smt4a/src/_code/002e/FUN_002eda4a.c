/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eda4a` (_code @ 0x2eda4a, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002eda5a(int);


void FUN_002eda4a(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002eda5a(param_1 + 8);
  FUN_002e9318(temp_v0 - 8);
  return;
}
