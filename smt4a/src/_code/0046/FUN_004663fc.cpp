/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004663fc` (_code @ 0x4663fc, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00461b68(unsigned int, int);

/* Supplied declaration required: FUN_00461b68. */


void FUN_004663fc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    temp_v2 = *(int *)(*(int *)(param_1 + 0x1a8) + 8);
    temp_v1 = 0;
    if (temp_v1 < temp_v2) {
      do {
        temp_v0 = param_1 + temp_v1 * 0x30;
        if (*(char *)(temp_v0 + 0x10) != param_2) {
          *(char *)(temp_v0 + 0x10) = (char)param_2;
          FUN_00461b68(*(unsigned int *)(param_1 + 0x1a8),temp_v1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v2);
    }
  }
  return;
}

} /* extern "C" */
