/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1306` (_code @ 0x2f1306, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00133162(int, int, unsigned int);
int FUN_00307ce2(int, int);

/* Supplied declaration required: FUN_00133162. */
/* Supplied declaration required: FUN_00307ce2. */


void FUN_002f1306(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  if (temp_v0 != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 4) = temp_v0 + 8;
    FUN_00307ce2(param_1,temp_v0);
    return;
  }
  FUN_00133162(param_1,temp_v0,param_2);
  return;
}

} /* extern "C" */
