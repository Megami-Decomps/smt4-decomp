/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a59c0` (_code @ 0x1a59c0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_001a59c0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(int *)(param_2 + 8) = param_1;
  nw_ut_internal_LinkListImpl_insert(param_1 + 0x18,param_1 + 0x1c,param_2 + 0x1c);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}
