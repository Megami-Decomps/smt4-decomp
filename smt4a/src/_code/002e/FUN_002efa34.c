/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efa34` (_code @ 0x2efa34, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_002efa34(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned long long temp_v0;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x7c))();
  if (((unsigned int)temp_v0 & param_3) != 0 || ((unsigned int)((unsigned long long)temp_v0 >> 0x20) & param_4) != 0) {
    return 1;
  }
  return 0;
}
