/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00497250` (_code @ 0x497250, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002802c8(void);


void FUN_00497250(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002802c8();
  if (temp_v0 == 0) {
    *param_1 = *param_1 | 0x102;
    param_1[4] = param_1[1];
    param_1[1] = 3;
    param_1[2] = 0;
  }
  return;
}

} /* extern "C" */
