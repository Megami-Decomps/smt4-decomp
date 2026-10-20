/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2594` (_code @ 0x3f2594, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035b0a4(int);

/* Supplied declaration required: FUN_0035b0a4. */


void FUN_003f2594(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_0035b0a4(temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  return;
}

} /* extern "C" */
