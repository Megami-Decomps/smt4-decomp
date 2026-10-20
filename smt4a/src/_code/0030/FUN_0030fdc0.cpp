/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fdc0` (_code @ 0x30fdc0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0030fdc0(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    (**(romwright_code **)*param_2)(param_2);
  }
  return;
}

} /* extern "C" */
