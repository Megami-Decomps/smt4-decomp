/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a000` (_code @ 0x10a000, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0010a014. */


unsigned int FUN_0010a000(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010a014(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(unsigned int *)(param_2 + 0x10));
  return 0;
}
