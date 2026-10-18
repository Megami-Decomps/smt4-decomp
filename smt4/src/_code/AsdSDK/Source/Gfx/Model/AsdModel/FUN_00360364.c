/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360364` (_code @ 0x360364, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00471ba8; /* 0x471ba8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_003607d0. */


void FUN_00360364(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_00471ba8 != '\0') {
    FUN_003607d0();
    software_interrupt(0x23);
    if (*param_1 < 0) {
      FUN_002c52f8();
    }
    DAT_00471ba8 = '\0';
  }
  return;
}
