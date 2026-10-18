/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fc90` (_code @ 0x10fc90, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */
extern unsigned int DAT_0044e46c; /* 0x44e46c */
extern unsigned char DAT_004c64c4; /* 0x4c64c4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0011d2d0. */


void FUN_0010fc90(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044e460 != 0) {
    FUN_0011d2d0(&DAT_004c64c4);
    software_interrupt(0x23);
    DAT_0044e460 = 0;
    DAT_0044e46c = 0;
  }
  return;
}
