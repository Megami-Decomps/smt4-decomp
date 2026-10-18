/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002874e4` (_code @ 0x2874e4, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043da29; /* 0x43da29 */
extern unsigned int DAT_0043da30; /* 0x43da30 */
extern unsigned int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002d65ac. */


void FUN_002874e4(void)

{
/* irregular: 4 native warning(s); review required */
  DAT_0043da29 = DAT_0043da29 - '\x01';
  if (DAT_0043da29 < '\x01') {
    FUN_002d65ac();
    FUN_002c4360(DAT_0043da30);
    FUN_002c4360(DAT_0043da34);
    FUN_002aeb2c(0x12,0);
    FUN_002aea7c(0x12);
    DAT_0043da29 = '\0';
  }
  return;
}
