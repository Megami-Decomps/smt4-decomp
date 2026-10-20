/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efd90` (_code @ 0x2efd90, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe4; /* 0x588fe4 */


void FUN_002efd90(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = DAT_00588fe4;
  if (DAT_00588fe4 != 0) {
    *(unsigned int *)(DAT_00588fe4 + 0x50c) = in_s0;
    *(unsigned int *)(temp_v0 + 0x510) = in_s1;
    *(unsigned int *)(temp_v0 + 0x514) = in_s2;
  }
  return;
}

} /* extern "C" */
