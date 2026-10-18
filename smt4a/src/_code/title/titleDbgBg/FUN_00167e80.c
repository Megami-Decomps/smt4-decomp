/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167e80` (_code @ 0x167e80, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00589168; /* 0x589168 */

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00167e80(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  temp_v0 = DAT_00589168 != 0;
  *(unsigned char *)(DAT_00589168 + 4) = 1;
  if (temp_v0) {
    FUN_0019a5a0();
    DAT_00589168 = 0;
  }
  return;
}
