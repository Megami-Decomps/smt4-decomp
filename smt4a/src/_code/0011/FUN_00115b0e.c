/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115b0e` (_code @ 0x115b0e, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_0030161c(int *);


unsigned int FUN_00115b0e(int *param_1)

{
  int temp_v0;
  
  (**(romwright_code **)(*param_1 + 0x3c))(param_1);
  temp_v0 = FUN_0030161c(param_1);
  if (temp_v0 != 0x40) {
    return 0;
  }
  return 1;
}
