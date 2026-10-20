/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5504` (_code @ 0x3e5504, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd76c(...);

/* Supplied declaration required: FUN_003fd76c. */


void FUN_003e5504(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_003fd76c();
  }
  temp_v2 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v2 * 0x5c + 0x24);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 4);
    }
    if (temp_v0 != 0 && temp_v1 != 0) {
      FUN_003fd76c(temp_v1,param_2);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  return;
}

} /* extern "C" */
