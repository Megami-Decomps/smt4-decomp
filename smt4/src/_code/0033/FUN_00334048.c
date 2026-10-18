/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334048` (_code @ 0x334048, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b63ac(void);


int FUN_00334048(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  return (int)*(short *)(temp_v0 + 0x1e);
}
