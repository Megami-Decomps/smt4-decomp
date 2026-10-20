/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfed4` (_code @ 0x3dfed4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int FUN_002efc44(void);

/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_002efc44. */


void FUN_003dfed4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  dataTable04FindById();
  if (param_1 != 0) {
    FUN_002efc44();
  }
  return;
}

} /* extern "C" */
