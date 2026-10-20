/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a560` (_code @ 0x43a560, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);
int FUN_0043aa48(void);
int software_interrupt(int);

extern signed char DAT_005c0b48; /* 0x5c0b48 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_0043aa48. */


void FUN_0043a560(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_005c0b48 != '\0') {
    FUN_0043aa48();
    software_interrupt(0x23);
    if (*param_1 < 0) {
      FUN_00195fc8();
    }
    DAT_005c0b48 = '\0';
  }
  return;
}

} /* extern "C" */
