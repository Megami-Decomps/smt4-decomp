/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239c50` (_code @ 0x239c50, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bbd10. */


unsigned int FUN_00239c50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) == 0) {
    FUN_002bbd10(0xe0a046da,0x239c6c);
  }
  return *(unsigned int *)(param_1 + 4);
}
