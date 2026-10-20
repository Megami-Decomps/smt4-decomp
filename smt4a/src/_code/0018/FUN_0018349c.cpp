/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018349c` (_code @ 0x18349c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int asdTMTexTableCallFileC(unsigned int);


int FUN_0018349c(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = asdTMTexTableCallFileC(*(unsigned int *)(param_1 + 0x10));
  return **(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14;
}

} /* extern "C" */
