/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00485060` (_code @ 0x485060, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_0019dc44(unsigned int);


void FUN_00485060(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  
  if (param_3 != 0xffffffff) {
    if (param_3 != 0) {
      temp_v0 = FUN_0019dc44(3);
      temp_v0 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0x44))(*(int **)(temp_v0 + 8),param_3 & 0xffff);
      if (temp_v0 == 0) {
        param_3 = 0xffff8140;
      }
    }
    param_1 = param_1 + param_2 * 2;
    *(char *)(param_1 + 0xb1) = (char)param_3;
    *(char *)(param_1 + 0xb0) = (char)(param_3 >> 8);
  }
  return;
}

} /* extern "C" */
