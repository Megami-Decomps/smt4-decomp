/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001882fc` (_code @ 0x1882fc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019c8c0(unsigned int);

/* Supplied declaration required: FUN_0019c8c0. */


void FUN_001882fc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 0x1c)) {
    do {
      temp_v0 = *(int *)(*(int *)(param_1 + 0x20) + temp_v1 * 4);
      if ((*(unsigned int *)(temp_v0 + 4) & 2) != 0) {
        FUN_0019c8c0(*(unsigned int *)(temp_v0 + 0xc));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x1c));
  }
  return;
}

} /* extern "C" */
