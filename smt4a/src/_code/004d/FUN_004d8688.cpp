/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8688` (_code @ 0x4d8688, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x003fdb00(unsigned int);

/* Supplied declaration required: func_0x003fdb00. */


void FUN_004d8688(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    func_0x003fdb00(*(unsigned int *)(*param_1 + 4));
    return;
  }
  return;
}

} /* extern "C" */
