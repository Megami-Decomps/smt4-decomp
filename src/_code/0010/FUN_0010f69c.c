/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f69c` (_code @ 0x10f69c, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e650; /* 0x44e650 */
extern signed char DAT_0044e651; /* 0x44e651 */
extern int DAT_0044e668; /* 0x44e668 */
extern int DAT_0044e66c; /* 0x44e66c */

/* Supplied declaration required: FUN_0011bc90. */
/* Supplied declaration required: FUN_0011bd08. */


void FUN_0010f69c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0011bd08();
  param_1 = param_1 * 10;
  DAT_0044e66c = param_1 >> 0x1f;
  DAT_0044e668 = param_1;
  FUN_0011bc90();
  if (param_1 != 0) {
    DAT_0044e651 = '\x01';
  }
  if ((DAT_0044e651 != '\0') || (DAT_0044e66c != 0 || DAT_0044e668 != 0)) {
    DAT_0044e650 = 1;
  }
  return;
}
