/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fdae8` (_code @ 0x3fdae8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned short FUN_003fdae8(int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x20c);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0xc;
  }
  return *(unsigned short *)(*(int *)(temp_v0 + 0x30) + 0x70);
}

} /* extern "C" */
