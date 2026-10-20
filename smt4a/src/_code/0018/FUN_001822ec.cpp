/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001822ec` (_code @ 0x1822ec, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f24c; /* 0x57f24c */


unsigned int FUN_001822ec(int param_1)

{
  int temp_v0;
  
  if (((*(short *)(DAT_0057f24c + 0x64e) == param_1) &&
      (*(char *)(DAT_0057f24c + 8) == '\x01' || *(char *)(DAT_0057f24c + 8) == '\x02')) &&
     ((temp_v0 = (int)*(short *)(DAT_0057f24c + 0x650), temp_v0 < 1 ||
      ((temp_v0 >= 0xf && (((temp_v0 - 0xfU) & 3) == 0)))))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
