/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1de4` (_code @ 0x2c1de4, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b96f0(void);


unsigned int FUN_002c1de4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b96f0();
  return *(unsigned int *)(temp_v0 + 8);
}
