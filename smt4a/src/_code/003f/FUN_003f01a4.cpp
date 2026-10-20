/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f01a4` (_code @ 0x3f01a4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003e46f4(unsigned int);


void FUN_003f01a4(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_003e46f4(0x8c);
  if (temp_v0 == 0) {
    temp_v1 = 3;
  }
  else {
    temp_v1 = 2;
  }
  *(unsigned int *)(param_1 + 0x4d74) = temp_v1;
  return;
}

} /* extern "C" */
