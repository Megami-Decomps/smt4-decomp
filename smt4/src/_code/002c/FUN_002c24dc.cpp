/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c24dc` (_code @ 0x2c24dc, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004c63b4; /* 0x4c63b4 */


void FUN_002c24dc(int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(DAT_004c63b4 * 4 + 0x4c63b8);
  if (temp_v1 != 0) {
    if (param_1 == 0x600) {
      temp_v0 = *(unsigned int *)(temp_v1 + 4);
    }
    else if (param_1 == 0x601) {
      temp_v0 = *(unsigned int *)(temp_v1 + 8);
    }
    else if (param_1 == 0x602) {
      temp_v0 = *(unsigned int *)(temp_v1 + 0xc);
    }
    else {
      if (param_1 != 0x603) {
        return;
      }
      temp_v0 = *(unsigned int *)(temp_v1 + 0x10);
    }
    *param_2 = temp_v0;
  }
  return;
}

} /* extern "C" */
