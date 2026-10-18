/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b722c` (_code @ 0x2b722c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c08f0(void);


int FUN_002b722c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  return *(int *)(temp_v0 + 8) + *(int *)(temp_v0 + 4);
}
