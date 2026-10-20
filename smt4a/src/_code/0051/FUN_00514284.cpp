/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514284` (_code @ 0x514284, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004acb54(void);
int FUN_0050d2cc(void);

/* Supplied declaration required: FUN_004acb54. */
/* Supplied declaration required: FUN_0050d2cc. */


void FUN_00514284(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = *(int *)(param_1 + 4);
  FUN_0050d2cc();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x10);
  }
  if (temp_v0 != 0 && temp_v1 != 0) {
    FUN_004acb54();
  }
  return;
}

} /* extern "C" */
