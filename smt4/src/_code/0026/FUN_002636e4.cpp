/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002636e4` (_code @ 0x2636e4, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int effIsFinished(unsigned int);
extern int FUN_002d5748(unsigned int);
extern int FUN_002d57a8(unsigned int);


unsigned int FUN_002636e4(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = effIsFinished(*(unsigned int *)(param_1 + 8));
  temp_v1 = 0;
  if (((temp_v0 != 0) && (temp_v0 = FUN_002d5748(*(unsigned int *)(param_1 + 8)), temp_v1 = 0, temp_v0 != 0))
     && (temp_v0 = FUN_002d57a8(*(unsigned int *)(param_1 + 8)), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
