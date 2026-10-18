/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dfdc` (_code @ 0x10dfdc, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002f8236(void);


void FUN_0010dfdc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002f8236();
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  return;
}
