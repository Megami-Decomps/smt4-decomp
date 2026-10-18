/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdcc4` (_code @ 0x2cdcc4, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */


unsigned int FUN_002cdcc4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcf0 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0043dcf0 + 0x1158);
  }
  return temp_v0;
}
