/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7b60` (_code @ 0x2f7b60, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00133222(int, int, unsigned int);
int FUN_0030c5d8(int, int);

/* Supplied declaration required: FUN_00133222. */
/* Supplied declaration required: FUN_0030c5d8. */


void FUN_002f7b60(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  if (temp_v0 != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 4) = temp_v0 + 0x18;
    FUN_0030c5d8(param_1,temp_v0);
    return;
  }
  FUN_00133222(param_1,temp_v0,param_2);
  return;
}

} /* extern "C" */
