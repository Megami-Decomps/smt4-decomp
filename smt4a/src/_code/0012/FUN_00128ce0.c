/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128ce0` (_code @ 0x128ce0, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e6dac(unsigned int);
/* Supplied declaration required: FUN_002fd020. */


void FUN_00128ce0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e6dac(8);
  if (temp_v0 != 0) {
    FUN_002fd020();
  }
  return;
}
