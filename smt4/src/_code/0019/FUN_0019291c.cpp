/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019291c` (_code @ 0x19291c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00297514(int);


unsigned char FUN_0019291c(int param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x1c) != 0;
  if (temp_v1) {
    temp_v0 = FUN_00297514(param_1);
    *(int *)(param_1 + 0x18) = temp_v0 + 1;
  }
  return temp_v1;
}

} /* extern "C" */
