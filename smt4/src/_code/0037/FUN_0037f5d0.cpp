/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f5d0` (_code @ 0x37f5d0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004ea474; /* 0x4ea474 */


int FUN_0037f5d0(int param_1,int param_2)

{
  int temp_v0;
  
  if (param_2 < 0x10) {
    temp_v0 = param_1 + param_2 * 2 + 0xcc;
  }
  else if (param_2 < 0x20) {
    temp_v0 = (int)&DAT_004ea474 + param_2 * 2;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
