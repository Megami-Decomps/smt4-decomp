/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ffa14` (_code @ 0x4ffa14, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004ffa14(int param_1)

{
  int temp_v0;
  
  if ((*(unsigned int *)(param_1 + 4) & 2) == 0) {
    param_1 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
    temp_v0 = *(int *)(param_1 + 0x30);
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0x44) != '\x02') {
        if (*(char *)(param_1 + 0x44) == '\x01') {
          return 1;
        }
      }
      else if ((*(unsigned char *)(temp_v0 + 4) & 1) != 0) {
        return 1;
      }
      if (*(float *)(param_1 + 0x28) < *(float *)(temp_v0 + 8)) {
        return 0;
      }
    }
  }
  return 1;
}
