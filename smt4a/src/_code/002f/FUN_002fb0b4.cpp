/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb0b4` (_code @ 0x2fb0b4, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char LAB_0010031d; /* 0x10031d */
extern unsigned char LAB_00100327; /* 0x100327 */
extern unsigned char LAB_0010032d; /* 0x10032d */


void FUN_002fb0b4(unsigned int *param_1)

{
  param_1[1] = (unsigned int)&LAB_0010031d;
  param_1[2] = (unsigned int)&LAB_0010032d;
  param_1[3] = (unsigned int)&LAB_00100327;
  *param_1 = 4;
  return;
}

} /* extern "C" */
