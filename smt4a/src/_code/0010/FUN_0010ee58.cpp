/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ee58` (_code @ 0x10ee58, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f9f28(int, unsigned int, int);

/* Supplied declaration required: FUN_002f9f28. */


void FUN_0010ee58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x18) - 1;
  *(int *)(param_1 + 0x18) = temp_v0;
  if (temp_v0 == 0) {
    if (*(short *)(param_1 + 0x14) == 8) {
      temp_v1 = 4;
    }
    else {
      temp_v1 = 0x10;
    }
    FUN_002f9f28(param_1,temp_v1,0);
  }
  return;
}

} /* extern "C" */
