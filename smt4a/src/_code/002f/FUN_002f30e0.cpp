/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f30e0` (_code @ 0x2f30e0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001156bc(unsigned int, int);
int FUN_002e7232(void);

/* Supplied declaration required: FUN_001156bc. */
/* Supplied declaration required: FUN_002e7232. */


void FUN_002f30e0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x38) != 0) {
      FUN_002e7232();
    }
    FUN_001156bc(*(unsigned int *)(param_1 + 0x4c),param_2);
  }
  return;
}

} /* extern "C" */
