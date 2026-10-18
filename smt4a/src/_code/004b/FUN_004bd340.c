/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd340` (_code @ 0x4bd340, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_004bd340(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned short *)(param_1 + 0x60) & (1 << (param_2 & 0xff))) != 0;
}
