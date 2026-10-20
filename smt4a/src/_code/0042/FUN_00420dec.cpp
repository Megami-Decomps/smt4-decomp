/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00420dec` (_code @ 0x420dec, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0040619c(int, int);
int FUN_004ff920(void);

/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: FUN_004ff920. */


void FUN_00420dec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x2c) == 4;
  if ((!temp_v1) && (*(int *)(param_1 + 0x2c) == 5)) {
    temp_v1 = 2;
  }
  if (*(int *)(param_1 + 8) != 0) {
    temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
    FUN_0040619c(temp_v0,temp_v1);
    if (temp_v0 != 0) {
      FUN_004ff920();
    }
  }
  return;
}

} /* extern "C" */
