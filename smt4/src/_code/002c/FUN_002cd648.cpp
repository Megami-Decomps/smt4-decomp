/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd648` (_code @ 0x2cd648, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043de68; /* 0x43de68 */


int FUN_002cd648(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 < 0xc) && (DAT_0043de68 != 0)) {
    temp_v0 = DAT_0043de68 + param_1 * 0x4c + 0x80;
  }
  return temp_v0;
}

} /* extern "C" */
