/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd068` (_code @ 0x4bd068, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_004bd068(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = 0;
  do {
    if (*(short *)(param_1 + temp_v1 * 2 + 0x34) == 0) {
      return temp_v0;
    }
    temp_v1 = temp_v1 + 1;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 < 8);
  return temp_v0;
}
