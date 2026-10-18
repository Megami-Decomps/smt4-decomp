/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00136c40` (_code @ 0x136c40, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00197c2c(unsigned int);
extern unsigned int FUN_001bc5ac(unsigned int);
extern int FUN_002e2ec0(unsigned int, unsigned int);


void FUN_00136c40(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002e2ec0(0,0x4000027);
  temp_v1 = FUN_00197c2c(0);
  *(int *)(temp_v0 + 4) = temp_v1 + 1;
  temp_v2 = FUN_001bc5ac(0);
  *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
  return;
}
