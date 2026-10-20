/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109e60` (_code @ 0x109e60, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f2dfc(int, int, unsigned int);

/* Supplied declaration required: FUN_002f2dfc. */


void FUN_00109e60(int param_1,int param_2,unsigned short *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f2dfc(param_1,param_2,param_4);
  if (param_1 != 0) {
    *param_3 = (*(unsigned short *)(param_2 + 6) << 8) | (*(unsigned short *)(param_2 + 6) >> 8);
  }
  return;
}

} /* extern "C" */
