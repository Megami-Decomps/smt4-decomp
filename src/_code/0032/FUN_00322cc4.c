/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322cc4` (_code @ 0x322cc4, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043ded0; /* 0x43ded0 */


unsigned int FUN_00322cc4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if (DAT_0043ded0 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0043ded0 + 0x30);
  }
  return temp_v0;
}
