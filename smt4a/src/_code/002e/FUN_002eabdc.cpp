/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eabdc` (_code @ 0x2eabdc, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e93da(void);

/* Supplied declaration required: FUN_002e93da. */


unsigned char FUN_002eabdc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e93da();
  return *(unsigned char *)(param_1 + 8);
}

} /* extern "C" */
