/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159ee4` (_code @ 0x159ee4, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e7c1; /* 0x44e7c1 */
extern signed char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_0044e7c4; /* 0x44e7c4 */
extern signed char DAT_0044e7c5; /* 0x44e7c5 */
extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Supplied declaration required: FUN_00146d58. */
/* Supplied declaration required: FUN_0015d160. */
/* Supplied declaration required: FUN_002a232c. */


void FUN_00159ee4(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0044e7c1 == '\0' && DAT_0044e7c3 == '\0') {
    if (DAT_0044e7c5 != '\0') {
      FUN_002a232c();
    }
    DAT_0044e7c4 = uRam1ff810c0;
    FUN_00146d58(&DAT_004e6f14);
    FUN_0015d160(&DAT_004e6f64);
    DAT_0044e7c5 = '\x01';
  }
  return;
}
