/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001113ec` (_code @ 0x1113ec, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001113ec(int *param_1,unsigned int param_2,unsigned int param_3)

{
  int uStack_14;
  int uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  (**(romwright_code **)(*param_1 + 0x18))(param_1,&uStack_14,&uStack_10,1,param_1);
  return;
}

} /* extern "C" */
