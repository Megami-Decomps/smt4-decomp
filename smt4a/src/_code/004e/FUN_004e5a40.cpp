/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e5a40` (_code @ 0x4e5a40, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlUnitGet(void);


void FUN_004e5a40(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = btlUnitGet();
  temp_v1 = 0;
  while ((temp_v2 = temp_v0 + temp_v1 * 8, -1 < *(int *)(temp_v2 + 0x5b8) || (*(int *)(temp_v2 + 0x5bc) != 0))
        ) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x85) {
      return;
    }
  }
  *(unsigned int *)(temp_v0 + temp_v1 * 8 + 0x5b8) = param_2;
  *(unsigned int *)(temp_v2 + 0x5bc) = param_3;
  return;
}

} /* extern "C" */
