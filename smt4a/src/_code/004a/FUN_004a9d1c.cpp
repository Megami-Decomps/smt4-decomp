/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9d1c` (_code @ 0x4a9d1c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb4b8(int);

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_002fb4b8. */


void FUN_004a9d1c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned int *)(DAT_0057a9c8 + 0x74a0) = 8;
  FUN_002fb4b8(temp_v0 + 8);
  return;
}

} /* extern "C" */
