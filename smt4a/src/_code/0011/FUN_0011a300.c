/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a300` (_code @ 0x11a300, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0011a76c. */
/* Supplied declaration required: FUN_002eb60c. */


void FUN_0011a300(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002eb60c();
  FUN_0011a76c(temp_v0);
  *(unsigned char *)((temp_v0 >> 4) + 0x1b) = 2;
  return;
}
