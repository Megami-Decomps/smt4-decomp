/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293ed0` (_code @ 0x293ed0, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00293ed0(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x4394);
  temp_v1 = *(int *)(temp_v0 + 4);
  temp_v2 = temp_v1 == 0;
  if (temp_v2) {
    temp_v1 = *(int *)(temp_v0 + 0x10);
  }
  if (temp_v2 && temp_v1 == 0) {
    temp_v2 = *(int *)(temp_v0 + 0x60) == 0;
    if (temp_v2) {
      temp_v0 = *(int *)(temp_v0 + 0xb0);
    }
    if (temp_v2 && temp_v0 == 0) {
      return 1;
    }
  }
  return 0;
}
