/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042ff1c` (_code @ 0x42ff1c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_0043015c. */
/* Supplied declaration required: FUN_00430610. */


void FUN_0042ff1c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_00430610();
    return;
  }
  if (DAT_005c1fc4 != 0) {
    FUN_0043015c(param_1);
    return;
  }
  return;
}
