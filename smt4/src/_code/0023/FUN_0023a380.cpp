/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a380` (_code @ 0x23a380, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00225c1c(void);
int FUN_003afd18(void);

/* Supplied declaration required: FUN_00225c1c. */
/* Supplied declaration required: FUN_003afd18. */


void FUN_0023a380(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 4);
  FUN_00225c1c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x10);
  }
  if (temp_v0 != 0 && temp_v1 != 0) {
    FUN_003afd18();
  }
  return;
}

} /* extern "C" */
