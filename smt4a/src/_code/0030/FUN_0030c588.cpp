/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c588` (_code @ 0x30c588, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0030c588(unsigned char *param_1,int param_2,unsigned char *param_3)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    if (param_1 != (unsigned char *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}

} /* extern "C" */
