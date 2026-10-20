/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228930` (_code @ 0x228930, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0027e928(void);


void FUN_00228930(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_0027e928();
  temp_v1 = 0;
  while ((temp_v2 = temp_v0 + temp_v1 * 8, -1 < *(int *)(temp_v2 + 0x5a8) || (*(int *)(temp_v2 + 0x5ac) != 0))
        ) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x85) {
      return;
    }
  }
  *(unsigned int *)(temp_v0 + temp_v1 * 8 + 0x5a8) = param_2;
  *(unsigned int *)(temp_v2 + 0x5ac) = param_3;
  return;
}

} /* extern "C" */
