/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239dec` (_code @ 0x239dec, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bbb2c(unsigned int, int);

/* Supplied declaration required: FUN_002bbb2c. */


unsigned int FUN_00239dec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) == 0) {
    FUN_002bbb2c(0xe0a046da,0x239e08);
  }
  return *(unsigned int *)(param_1 + 4);
}

} /* extern "C" */
