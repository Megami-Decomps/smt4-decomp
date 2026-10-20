/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010716a` (_code @ 0x10716a, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e98ea(int);

/* Supplied declaration required: FUN_002e98ea. */


unsigned int FUN_0010716a(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_002e98ea(param_2);
    *(unsigned short *)((param_3 * 2 + param_2) - 2) = 0;
    return 1;
  }
  return 0;
}

} /* extern "C" */
