/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010236c` (_code @ 0x10236c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001382e4(unsigned int);
extern unsigned int FUN_0014d9f0(unsigned int);
extern int FUN_002c6a04(unsigned int, unsigned int);


void FUN_0010236c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c6a04(0,0x4000026);
  temp_v1 = FUN_001382e4(0);
  *(int *)(temp_v0 + 4) = temp_v1 + 1;
  temp_v2 = FUN_0014d9f0(0);
  *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
  return;
}
