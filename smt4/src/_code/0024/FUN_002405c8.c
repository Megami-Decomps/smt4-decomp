/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002405c8` (_code @ 0x2405c8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002405c8(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = param_1 + temp_v0 * 4, *(int *)(temp_v1 + 0x48bc) != param_2 &&
         (*(int *)(temp_v1 + 0x48c0) != param_2))) {
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x2a) {
      return 0;
    }
  }
  return 1;
}
