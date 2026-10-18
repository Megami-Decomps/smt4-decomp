/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001655b8` (_code @ 0x1655b8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */
extern unsigned int DAT_005b3fd4; /* 0x5b3fd4 */

/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001bcd48. */


void FUN_001655b8(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  while (*param_1 != 4 && *param_1 != 5) {
    FUN_001a08d8(&DAT_005b3fd4);
    FUN_001bcd48(&LAB_002dc6c0,0);
  }
  return;
}
