/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c008` (_code @ 0x15c008, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00158f24. */


void FUN_0015c008(unsigned int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  if ((*param_2 == 0x4b4e4243) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (unsigned int)param_2;
    FUN_00158f24();
    *(unsigned char *)(param_1 + 2) = 1;
    param_1[1] = (unsigned int)(param_2 + 2);
  }
  return;
}
