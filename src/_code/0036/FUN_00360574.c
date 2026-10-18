/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360574` (_code @ 0x360574, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00471ba8; /* 0x471ba8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_003609e0. */


void FUN_00360574(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_00471ba8 != '\0') {
    FUN_003609e0();
    software_interrupt(0x23);
    if (*param_1 < 0) {
      FUN_002bce48();
    }
    DAT_00471ba8 = '\0';
  }
  return;
}
