/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2814` (_code @ 0x2a2814, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f114; /* 0x57f114 */


unsigned int FUN_002a2814(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0057f114 != 0) && (*(int *)(DAT_0057f114 + 0x140) == 0xc)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
