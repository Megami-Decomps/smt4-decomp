/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e908` (_code @ 0x29e908, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x002cb8d0(int);

/* Supplied declaration required: func_0x002cb8d0. */


void FUN_0029e908(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x62) == '\0') {
    func_0x002cb8d0(param_1 + 0x28);
    return;
  }
  return;
}

} /* extern "C" */
