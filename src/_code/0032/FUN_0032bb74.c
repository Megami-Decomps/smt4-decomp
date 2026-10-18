/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032bb74` (_code @ 0x32bb74, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044d024; /* 0x44d024 */
extern unsigned char DAT_004c3a50; /* 0x4c3a50 */
extern unsigned int DAT_004c3af8; /* 0x4c3af8 */
extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern unsigned int DAT_004c4080; /* 0x4c4080 */
extern unsigned int DAT_004c40e4; /* 0x4c40e4 */

/* Supplied declaration required: FUN_002b90b0. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_0034e140. */
/* Supplied declaration required: FUN_0034f5f8. */
/* Supplied declaration required: FUN_0034f6e8. */
/* Supplied declaration required: FUN_0034f780. */
/* Supplied declaration required: FUN_0034fa04. */
/* Supplied declaration required: FUN_003516c0. */
/* Supplied declaration required: FUN_003f6b28. */


void FUN_0032bb74(void)

{
/* irregular: 9 native warning(s); review required */
  FUN_0034f5f8(&DAT_004c3af8);
  FUN_0034fa04(&DAT_004c3b20);
  FUN_003516c0(&DAT_004c3b20);
  FUN_0034f780(&DAT_004c3a50);
  FUN_0034f6e8(&DAT_004c3af8);
  FUN_003f6b28(DAT_0044d024);
  DAT_0044d024 = 0;
  FUN_0034e140(&DAT_004c4080);
  if ((DAT_004c40e4 & 0xfffffffe) != 0) {
    if ((DAT_004c40e4 & 1) != 0) {
      FUN_002c52f8();
    }
    FUN_002b90b0(DAT_004c40e4 & 0xfffffffe);
    DAT_004c40e4 = 0;
  }
  return;
}
