/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159110` (_code @ 0x159110, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int nn_fnd_detail_CreateHeap(void);

/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: nn_fnd_detail_CreateHeap. */


void FUN_00159110(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 + 0x18;
  nn_fnd_detail_CreateHeap();
  if (temp_v0 == 0) {
    sysFatalBreak();
  }
  *(unsigned int *)(param_1 + 0x54) = 0;
  return;
}

} /* extern "C" */
