/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237418` (_code @ 0x237418, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */
extern unsigned int DAT_0057f6a0; /* 0x57f6a0 */

/* Supplied declaration required: rt_memcpy_w. */


void FUN_00237418(void)

{
/* irregular: 1 native warning(s); review required */
  rt_memcpy_w(DAT_0057f6a0,DAT_0057f69c + 0x88,0x2a71c);
  return;
}
