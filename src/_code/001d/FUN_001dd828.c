/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd828` (_code @ 0x1dd828, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */

/* Supplied declaration required: FUN_0033504c. */


void FUN_001dd828(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e2ac;
  *(unsigned int *)(DAT_0043e2ac + 0x9870) = *(unsigned int *)(DAT_0043e2ac + 0x986c);
  *(unsigned int *)(temp_v0 + 0x981e) = 0;
  *(unsigned int *)(temp_v0 + 0x9822) = 0;
  *(unsigned int *)(temp_v0 + 0x9826) = 0;
  *(unsigned int *)(temp_v0 + 0x982a) = 0;
  *(unsigned short *)(temp_v0 + 0x982e) = 0;
  FUN_0033504c();
  return;
}
