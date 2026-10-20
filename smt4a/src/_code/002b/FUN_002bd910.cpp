/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd910` (_code @ 0x2bd910, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_002bd910(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  *(float *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x5464) = *(float *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x5464) + in_s0;
  return;
}

} /* extern "C" */
