/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318d6c` (_code @ 0x318d6c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057f0c5; /* 0x57f0c5 */
extern unsigned int DAT_0057f0cc; /* 0x57f0cc */
extern unsigned int DAT_0057f0d0; /* 0x57f0d0 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_00341f4c. */


void FUN_00318d6c(void)

{
/* irregular: 4 native warning(s); review required */
  DAT_0057f0c5 = DAT_0057f0c5 - '\x01';
  if (DAT_0057f0c5 < '\x01') {
    FUN_00341f4c();
    FUN_0019a5a0(DAT_0057f0cc);
    FUN_0019a5a0(DAT_0057f0d0);
    FUN_0019a7f4(10,0);
    FUN_002e132c(10);
    DAT_0057f0c5 = '\0';
  }
  return;
}
