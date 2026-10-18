/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d020` (_code @ 0x11d020, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00471a70; /* 0x471a70 */
extern unsigned int DAT_00471a84; /* 0x471a84 */

/* Supplied declaration required: FUN_00129cd0. */


void FUN_0011d020(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00471a70 != '\0') {
    FUN_00129cd0(&DAT_00471a84,0);
    return;
  }
  return;
}
