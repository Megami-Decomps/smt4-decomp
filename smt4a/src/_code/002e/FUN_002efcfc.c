/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efcfc` (_code @ 0x2efcfc, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ea714. */
/* Supplied declaration required: FUN_002eaa50. */


void FUN_002efcfc(unsigned int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002ea714();
  FUN_002eaa50();
  *param_1 = *(unsigned int *)(*(int *)(param_2 + 0x14) + 8);
  return;
}
