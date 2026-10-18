/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300d90` (_code @ 0x300d90, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_00300d90(int *param_1,unsigned int param_2,int param_3)

{
  if (param_3 != -0x26) {
    if (param_3 != -8) {
      if (param_3 != -6) {
        return 1;
      }
      return 2;
    }
  }
  else {
    (**(romwright_code **)(*param_1 + 0x14))(param_1);
    (**(romwright_code **)(*param_1 + 4))(param_1);
  }
  return 4;
}
