/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249c9c` (_code @ 0x249c9c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_0019a7f4(int, unsigned int);

extern int DAT_005821c4; /* 0x5821c4 */
extern int DAT_005821f4; /* 0x5821f4 */
extern unsigned int DAT_005821f8; /* 0x5821f8 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */


void FUN_00249c9c(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005821c4 != 0) {
    FUN_0019a5a0();
    DAT_005821c4 = 0;
  }
  if (DAT_005821f4 != 0) {
    FUN_0019a7f4(0x2d,DAT_005821f8);
    DAT_005821f8 = 0;
    DAT_005821f4 = 0;
  }
  return;
}

} /* extern "C" */
