/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042442c` (_code @ 0x42442c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0042337c(int);


unsigned char FUN_0042442c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0042337c(param_1 + 0x158);
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0xc) = 7;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
