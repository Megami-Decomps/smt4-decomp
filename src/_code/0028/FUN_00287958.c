/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287958` (_code @ 0x287958, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_00287958(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned char *)(param_1 + 9) & (1 << (param_2 & 0xff))) != 0;
}
