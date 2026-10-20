/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122554` (_code @ 0x122554, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bitCursorSetPosition(int, unsigned int);
int FUN_002fa010(unsigned int, unsigned int);
int rangeObjRemaining(...);

/* Supplied declaration required: bitCursorSetPosition. */
/* Supplied declaration required: FUN_002fa010. */
/* Supplied declaration required: rangeObjRemaining. */


void FUN_00122554(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  bitCursorSetPosition(param_1,*(unsigned int *)(param_1 + 0x14));
  temp_v2 = *(int *)(param_1 + 0xc) + ((unsigned int)((7 - *(int *)(param_1 + 0x10)) + param_2) >> 3) + 1;
  if ((unsigned int)(*(int *)(*(int *)(param_1 + 8) + 0x14) - *(int *)(*(int *)(param_1 + 8) + 0x18)) <
      temp_v2) {
    temp_v0 = rangeObjRemaining();
    temp_v1 = rangeObjRemaining(*(unsigned int *)(param_1 + 8));
    temp_v1 = temp_v0 + (temp_v1 >> 1);
    if (temp_v1 <= temp_v2) {
      temp_v1 = temp_v2;
    }
    FUN_002fa010(*(unsigned int *)(param_1 + 8),temp_v1);
  }
  return;
}

} /* extern "C" */
