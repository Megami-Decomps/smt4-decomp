/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003be874` (_code @ 0x3be874, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003be874(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 == 0x13 || param_1 == 0x14) {
    temp_v0 = 0x3e0;
  }
  else if (param_1 != 0x16) {
    temp_v0 = 1 << (param_1 & 0xff);
  }
  else {
    temp_v0 = 1000;
  }
  return temp_v0;
}
