/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282f00` (_code @ 0x282f00, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e178; /* 0x44e178 */


void FUN_00282f00(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = DAT_0044e178;
  if (DAT_0044e178 != 0) {
    *(unsigned int *)(DAT_0044e178 + 0x508) = in_s0;
    *(unsigned int *)(temp_v0 + 0x50c) = in_s1;
    *(unsigned int *)(temp_v0 + 0x510) = in_s2;
  }
  return;
}
