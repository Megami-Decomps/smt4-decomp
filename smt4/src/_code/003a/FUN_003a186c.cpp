/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a186c` (_code @ 0x3a186c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00282b28(void);


void FUN_003a186c(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00282b28();
  if (temp_v0 == 0) {
    *param_1 = *param_1 | 0x102;
    param_1[1] = 2;
    param_1[2] = 0;
  }
  return;
}

} /* extern "C" */
