/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112138` (_code @ 0x112138, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00112138(int *param_1)

{
  int temp_v0;
  
  if (*(char *)((int)param_1 + 0x1b1) == '\0') {
    (**(romwright_code **)(*param_1 + 0x34))(param_1,*(romwright_code **)(*param_1 + 0x34),0x4000,0);
    *(unsigned char *)((int)param_1 + 0x1b1) = 1;
    if (((int *)param_1[0x1e] != (int *)0x0) &&
       (temp_v0 = (**(romwright_code **)(*(int *)param_1[0x1e] + 0x20))(), temp_v0 != 0)) {
      (**(romwright_code **)(*(int *)param_1[0x1e] + 0x58))((int *)param_1[0x1e],0);
    }
    if ((int *)param_1[0x6d] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x6d] + 0x24))();
    }
  }
  return;
}

} /* extern "C" */
