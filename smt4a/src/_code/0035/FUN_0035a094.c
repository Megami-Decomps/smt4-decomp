/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a094` (_code @ 0x35a094, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f114; /* 0x57f114 */


unsigned int FUN_0035a094(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0057f114 != 0) && (*(int *)(DAT_0057f114 + 0x140) == 0xd)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
