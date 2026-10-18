/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427d34` (_code @ 0x427d34, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c0a8c; /* 0x5c0a8c */
extern unsigned char DAT_00642980; /* 0x642980 */

/* Supplied declaration required: FUN_0019a46c. */


void FUN_00427d34(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0019a46c(&DAT_00642980 + DAT_005c0a8c * 0x40,param_1,0x40);
  DAT_005c0a8c = DAT_005c0a8c + 1;
  return;
}
