/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f7e0` (_code @ 0x37f7e0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0037f7e0(int param_1,int param_2)

{
  int temp_v0;
  
  if (param_2 < 0x10) {
    temp_v0 = param_1 + param_2 * 2 + 0xcc;
  }
  else if (param_2 < 0x20) {
    temp_v0 = param_2 * 2 + 0x4ea474;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
