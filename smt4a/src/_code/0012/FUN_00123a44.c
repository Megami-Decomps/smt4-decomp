/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123a44` (_code @ 0x123a44, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ecf28(void);


unsigned int FUN_00123a44(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002ecf28();
  return *(unsigned int *)(temp_v0 + 0xc);
}
