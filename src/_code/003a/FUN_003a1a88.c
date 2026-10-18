/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1a88` (_code @ 0x3a1a88, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00282d98(void);


void FUN_003a1a88(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00282d98();
  if (temp_v0 == 0) {
    *param_1 = *param_1 | 0x102;
    param_1[1] = 2;
    param_1[2] = 0;
  }
  return;
}
