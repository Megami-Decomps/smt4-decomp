/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002592d8` (_code @ 0x2592d8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044deb8; /* 0x44deb8 */


unsigned int FUN_002592d8(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (*(int *)(DAT_0044deb8 + 0x1c) - param_1) - 1;
  if (*(char *)(DAT_0044deb8 + temp_v0 + 0x20) == '\x05') {
    temp_v1 = *(unsigned int *)(DAT_0044deb8 + temp_v0 * 4 + 0x3c);
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
