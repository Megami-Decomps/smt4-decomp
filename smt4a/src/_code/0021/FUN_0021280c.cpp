/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021280c` (_code @ 0x21280c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003d2004(int);


unsigned char FUN_0021280c(int param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x1c) != 0;
  if (temp_v1) {
    temp_v0 = FUN_003d2004(param_1);
    *(int *)(param_1 + 0x18) = temp_v0 + 1;
  }
  return temp_v1;
}

} /* extern "C" */
