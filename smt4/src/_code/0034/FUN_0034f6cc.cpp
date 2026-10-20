/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f6cc` (_code @ 0x34f6cc, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_0034f6cc(int param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  
  temp_v0 = param_2 != 0 && param_3 != 0;
  if (temp_v0) {
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
  }
  return temp_v0;
}

} /* extern "C" */
