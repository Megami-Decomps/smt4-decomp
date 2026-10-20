/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b410` (_code @ 0x23b410, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);

extern signed char DAT_00588fd1; /* 0x588fd1 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_0023b410(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00588fd1 < '\x01') {
    FUN_0014384c(0x12);
    temp_v0 = 0;
    do {
      FUN_0014afd0(0x12,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
  }
  DAT_00588fd1 = DAT_00588fd1 + '\x01';
  return;
}

} /* extern "C" */
