/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040afcc` (_code @ 0x40afcc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x004188d4(void);

/* Supplied declaration required: func_0x004188d4. */


void FUN_0040afcc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x004188d4();
    return;
  }
  return;
}

} /* extern "C" */
