/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cc6c0` (_code @ 0x1cc6c0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_ut_internal_LinkListImpl_insert(int, int, int);

/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_001cc6c0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_ut_internal_LinkListImpl_insert(param_1,param_1 + 4,param_2 + 4);
  return;
}

} /* extern "C" */
