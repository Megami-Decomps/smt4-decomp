/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0d40` (_code @ 0x1a0d40, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c1bfc; /* 0x5c1bfc */


unsigned int FUN_001a0d40(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_005c1bfc != 0) {
    temp_v0 = *(unsigned int *)(DAT_005c1bfc + 8);
  }
  return temp_v0;
}
