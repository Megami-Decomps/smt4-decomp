/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001239a2` (_code @ 0x1239a2, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002ebd34(void);


int FUN_001239a2(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002ebd34();
  return (int)*(char *)(**(int **)(param_1 + 0x34) + temp_v0);
}

} /* extern "C" */
