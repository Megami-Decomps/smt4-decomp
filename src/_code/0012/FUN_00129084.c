/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129084` (_code @ 0x129084, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e7c0; /* 0x44e7c0 */
extern unsigned char DAT_0044e7c1; /* 0x44e7c1 */
extern unsigned char DAT_0044e7c2; /* 0x44e7c2 */
extern unsigned char DAT_0044e7c8; /* 0x44e7c8 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_00129384. */
/* Supplied declaration required: FUN_002c5220. */


void FUN_00129084(void)

{
/* irregular: 2 native warning(s); review required */
  if ((DAT_0044e7c0 & ~DAT_0044e7c1) != 0) {
    FUN_002c5220(&DAT_0044e7c8,1);
    DAT_0044e7c2 = 1;
    FUN_00129384(&DAT_004e6f64,1);
    DAT_0044e7c1 = 1;
  }
  return;
}
