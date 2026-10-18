/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb870` (_code @ 0x4bb870, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_004bb80c(void);


unsigned short FUN_004bb870(void)

{
  int temp_v0;
  
  temp_v0 = FUN_004bb80c();
  return *(unsigned short *)(temp_v0 + 0x10);
}
