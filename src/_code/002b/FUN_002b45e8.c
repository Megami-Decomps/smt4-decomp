/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b45e8` (_code @ 0x2b45e8, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002b45e8(void)

{
/* irregular: 2 native warning(s); review required */
  int unaff_r6;
  int unaff_r7;
  
  *(int *)(unaff_r7 >> 1) = unaff_r7;
  *(short *)(unaff_r6 + 2) = (short)((unsigned int)(unaff_r7 >> 1) >> 8);
  return;
}
