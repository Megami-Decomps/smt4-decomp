/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae3a8` (_code @ 0x2ae3a8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c940(int);

extern unsigned char DAT_0057f0bc; /* 0x57f0bc */

/* Supplied declaration required: FUN_0028c940. */


void FUN_002ae3a8(void)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&DAT_0057f0bc + 0x4)) = 2;
  FUN_0028c940(0);
  return;
}

} /* extern "C" */
