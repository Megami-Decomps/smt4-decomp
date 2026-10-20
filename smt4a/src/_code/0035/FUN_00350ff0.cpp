/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350ff0` (_code @ 0x350ff0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effTlpCreate(void);
int handleBlockUnref(void);

/* Supplied declaration required: effTlpCreate. */
/* Supplied declaration required: handleBlockUnref. */


void FUN_00350ff0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x48) != 0) {
    handleBlockUnref();
  }
  effTlpCreate();
  *(unsigned int *)(param_1 + 0x48) = param_2;
  return;
}

} /* extern "C" */
