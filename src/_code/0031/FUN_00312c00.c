/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312c00` (_code @ 0x312c00, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);


unsigned int FUN_00312c00(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00293c98();
  *(unsigned int *)(temp_v0 + 0x44a4) = *(unsigned int *)(temp_v0 + 0x44a4) | 1;
  return 1;
}
