/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246cf8` (_code @ 0x246cf8, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002629a0(int, int);
int FUN_002a03a0(int, int, int);

/* Supplied declaration required: FUN_002629a0. */
/* Supplied declaration required: FUN_002a03a0. */


void FUN_00246cf8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x49d8);
  if (temp_v0 != param_2) {
    if (temp_v0 != -1) {
      FUN_002629a0(temp_v0,0);
    }
    FUN_002a03a0(param_2,0,10);
    *(int *)(param_1 + 0x49d8) = param_2;
  }
  return;
}

} /* extern "C" */
