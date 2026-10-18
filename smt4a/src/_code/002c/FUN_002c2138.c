/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2138` (_code @ 0x2c2138, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f3bc; /* 0x57f3bc */


unsigned int FUN_002c2138(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0057f3bc != 0) && (*(int *)(DAT_0057f3bc + 8) == 5)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
