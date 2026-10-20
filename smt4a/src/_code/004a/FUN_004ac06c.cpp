/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ac06c` (_code @ 0x4ac06c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_001acf98(int, int);

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_001acf98. */


void FUN_004ac06c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0014384c(0xc);
  FUN_0014384c(0xd);
  temp_v0 = 0;
  do {
    FUN_001acf98(0xc,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 6);
  temp_v0 = 0;
  do {
    FUN_001acf98(0xd,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  return;
}

} /* extern "C" */
