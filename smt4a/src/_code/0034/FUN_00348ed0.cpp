/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348ed0` (_code @ 0x348ed0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x00387554(int);

/* Supplied declaration required: func_0x00387554. */


void FUN_00348ed0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x62) == '\0') {
    func_0x00387554(param_1);
    return;
  }
  return;
}

} /* extern "C" */
