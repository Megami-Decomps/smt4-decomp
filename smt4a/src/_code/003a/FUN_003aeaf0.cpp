/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aeaf0` (_code @ 0x3aeaf0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f0c8; /* 0x57f0c8 */


unsigned short FUN_003aeaf0(unsigned int param_1)

{
  unsigned short temp_v0;
  
  if (param_1 >= 6) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned short *)(DAT_0057f0c8 + param_1 * 4 + 0x5ae);
  }
  return temp_v0;
}

} /* extern "C" */
