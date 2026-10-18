/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028727c` (_code @ 0x28727c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043da29; /* 0x43da29 */
extern unsigned int DAT_0043da30; /* 0x43da30 */
extern unsigned int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002d661c. */


void FUN_0028727c(void)

{
/* irregular: 4 native warning(s); review required */
  DAT_0043da29 = DAT_0043da29 - '\x01';
  if (DAT_0043da29 < '\x01') {
    FUN_002d661c();
    FUN_002c415c(DAT_0043da30);
    FUN_002c415c(DAT_0043da34);
    FUN_002ae898(0x12,0);
    FUN_002ae7e8(0x12);
    DAT_0043da29 = '\0';
  }
  return;
}
