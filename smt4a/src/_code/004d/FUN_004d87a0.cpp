/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d87a0` (_code @ 0x4d87a0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x003fd720(unsigned int);

/* Supplied declaration required: func_0x003fd720. */


void FUN_004d87a0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    func_0x003fd720(*(unsigned int *)(*param_1 + 4));
    return;
  }
  return;
}

} /* extern "C" */
