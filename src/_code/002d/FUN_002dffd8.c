/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dffd8` (_code @ 0x2dffd8, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e40; /* 0x447e40 */


void FUN_002dffd8(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = DAT_00447e40 + *(int *)(DAT_00447e40 + 0x2840) * 0x284;
  puVar2 = (unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x280) * 0x28);
  *puVar2 = 0;
  puVar2[1] = in_s0;
  puVar2[2] = in_s1;
  puVar2[3] = in_s2;
  *(int *)(temp_v0 + 0x280) = *(int *)(temp_v0 + 0x280) + 1;
  return;
}
