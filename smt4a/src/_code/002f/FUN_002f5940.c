/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5940` (_code @ 0x2f5940, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00121cc4. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002eb5f4. */


void FUN_002f5940(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002eb5f4();
  if (temp_v0 != 0) {
    FUN_002eb5f4();
    FUN_002e75fa();
  }
  else {
    temp_v0 = FUN_002e760a(0x3c4);
    if (temp_v0 != 0) {
      FUN_00121cc4();
      return;
    }
  }
  return;
}
