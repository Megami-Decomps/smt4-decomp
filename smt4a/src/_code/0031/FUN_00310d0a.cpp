/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310d0a` (_code @ 0x310d0a, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002fc046(void);
extern int FUN_00310d38(int, unsigned int, int);


int FUN_00310d0a(int param_1,int param_2,int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_002fc046();
  if (temp_v0 == 0) {
    temp_v0 = FUN_00310d38(param_3,*(unsigned int *)(param_1 + 4),param_2);
    for (; temp_v0 != *(int *)(param_1 + 4); temp_v0 = temp_v0 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - (param_3 - param_2);
  }
  return param_2;
}

} /* extern "C" */
