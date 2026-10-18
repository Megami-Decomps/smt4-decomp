/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ece4` (_code @ 0x10ece4, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e7228. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002ea3d0. */


void FUN_0010ece4(unsigned int param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_002e7228();
  FUN_002ea3d0(param_1,param_2);
  if (param_2 != (int *)0x0) {
    (**(romwright_code **)(*param_2 + 4))(param_2);
  }
  FUN_002e7232(param_1);
  return;
}
