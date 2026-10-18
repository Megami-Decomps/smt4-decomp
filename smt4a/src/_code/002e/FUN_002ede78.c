/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ede78` (_code @ 0x2ede78, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ede60(void);


void FUN_002ede78(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002ede60();
  *(unsigned int *)(temp_v0 + 0x20) = *(unsigned int *)(param_2 + 0x20);
  return;
}
