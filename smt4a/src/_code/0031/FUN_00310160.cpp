/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310160` (_code @ 0x310160, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_001149ac(unsigned int);


unsigned int FUN_00310160(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (param_1 < param_2) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    temp_v0 = FUN_001149ac(param_2);
    if (param_2 <= temp_v0) {
      param_1 = temp_v0;
    }
    for (; param_1 < param_2; param_1 = param_1 << 1) {
    }
  }
  return param_1;
}

} /* extern "C" */
