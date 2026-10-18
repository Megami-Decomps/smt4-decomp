/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128f9c` (_code @ 0x128f9c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00128f9c(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = param_2;
  if (param_1 != 0) {
    if (param_1 == 1) {
      temp_v0 = param_2 << 1;
    }
    else {
      if (param_1 == 2) {
        temp_v1 = param_2 + (unsigned int)(((unsigned long long)param_2 * 0x49249249 + 0x49249249) >> 0x22) * -0xe;
        temp_v0 = (unsigned int)(((unsigned long long)param_2 * 0x49249249 + 0x49249249) >> 0x22) * 0x10;
        if (temp_v1 != 0) {
          temp_v0 = temp_v0 + temp_v1 + 2;
        }
        return temp_v0 >> 1;
      }
      temp_v0 = 0;
      if (param_1 == 3) {
        temp_v0 = param_2 >> 1;
      }
    }
  }
  return temp_v0;
}
