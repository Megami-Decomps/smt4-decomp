/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c280` (_code @ 0x37c280, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_ut_internal_LinkListImpl_insert(int, int, int);

/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_0037c280(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_ut_internal_LinkListImpl_insert(param_1 + 0x1dc,param_1 + 0x1e0,param_2 + 4);
  return;
}

} /* extern "C" */
