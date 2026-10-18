/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281a0c` (_code @ 0x281a0c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_00281a0c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0013f1b8(0x1b,0);
  temp_v0 = 0;
  do {
    FUN_0014afd0(0x1b,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x12);
  return;
}
