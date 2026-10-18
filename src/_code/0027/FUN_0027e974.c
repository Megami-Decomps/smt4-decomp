/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e974` (_code @ 0x27e974, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00234660(int);
extern int FUN_00263c34(int);


int FUN_0027e974(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00234660(param_1 + 0x2e8);
  temp_v0 = FUN_00263c34(temp_v0 - 0x34);
  return temp_v0 - 0x2b4;
}
