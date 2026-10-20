/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4fac` (_code @ 0x2f4fac, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(void);
int FUN_002f4f20(int, int);

/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: FUN_002f4f20. */


void FUN_002f4fac(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x40) != 0) {
    sharedRefRelease();
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
  if (param_2 != 0) {
    *(int *)(param_1 + 0x40) = param_2;
    FUN_002f4f20(param_2 + 4,1);
  }
  return;
}

} /* extern "C" */
