/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aedcc` (_code @ 0x2aedcc, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */


unsigned int FUN_002aedcc(int param_1)

{
  int temp_v0;
  
  if (((*(short *)(DAT_0043dcb4 + 0x64e) == param_1) &&
      (*(char *)(DAT_0043dcb4 + 8) == '\x01' || *(char *)(DAT_0043dcb4 + 8) == '\x02')) &&
     ((temp_v0 = (int)*(short *)(DAT_0043dcb4 + 0x650), temp_v0 < 1 ||
      ((temp_v0 >= 0xf && (((temp_v0 - 0xfU) & 3) == 0)))))) {
    return 1;
  }
  return 0;
}
