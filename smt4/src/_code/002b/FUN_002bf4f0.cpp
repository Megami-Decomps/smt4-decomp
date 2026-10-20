/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf4f0` (_code @ 0x2bf4f0, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int asdTMTexTableCallFileA(unsigned int);


int FUN_002bf4f0(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = asdTMTexTableCallFileA(*(unsigned int *)(param_1 + 0x10));
  return **(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14;
}

} /* extern "C" */
