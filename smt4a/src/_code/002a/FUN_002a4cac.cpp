/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4cac` (_code @ 0x2a4cac, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(int, int);
int FUN_001acf98(int, int);

extern signed char DAT_0057f250; /* 0x57f250 */

/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_001acf98. */


void FUN_002a4cac(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0057f250 < '\x01') {
    FUN_0013f1b8(7,0);
    temp_v0 = 0;
    do {
      FUN_001acf98(7,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
  }
  DAT_0057f250 = DAT_0057f250 + '\x01';
  return;
}

} /* extern "C" */
