/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031066a` (_code @ 0x31066a, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0031066a(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (unsigned char *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}

} /* extern "C" */
