/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ed92` (_code @ 0x10ed92, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0011080c. */


void FUN_0010ed92(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011080c(*param_1);
  if (param_4 != 0) {
    *(unsigned short *)((param_3 * 2 + param_2) - 2) = 0;
  }
  return;
}
