/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b33c` (_code @ 0x33b33c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e1b3c(int);

/* Supplied declaration required: FUN_002e1b3c. */


void FUN_0033b33c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_002e1b3c(temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  return;
}

} /* extern "C" */
