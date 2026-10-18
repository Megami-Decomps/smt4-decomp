/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239234` (_code @ 0x239234, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00239234(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 0x501) {
    rt_memcpy_w(param_2,DAT_0057f69c + param_1 * 0x50 + 0x5f0c,0x50);
    return 1;
  }
  return 0;
}
