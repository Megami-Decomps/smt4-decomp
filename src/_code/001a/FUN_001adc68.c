/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001adc68` (_code @ 0x1adc68, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_002a0640. */


unsigned int FUN_001adc68(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043dd68 == 0) {
    return 0;
  }
  FUN_002a0640(*(unsigned int *)(DAT_0043dd68 + 0x47c),0,0x3c);
  return 1;
}
