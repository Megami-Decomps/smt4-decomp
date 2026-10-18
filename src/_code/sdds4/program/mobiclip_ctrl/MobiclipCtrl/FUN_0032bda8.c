/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032bda8` (_code @ 0x32bda8, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044d024; /* 0x44d024 */
extern unsigned char DAT_004c3a50; /* 0x4c3a50 */
extern unsigned int DAT_004c3af8; /* 0x4c3af8 */
extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern unsigned int DAT_004c4080; /* 0x4c4080 */
extern unsigned int DAT_004c40e4; /* 0x4c40e4 */

/* Supplied declaration required: FUN_002b93f0. */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_0034e350. */
/* Supplied declaration required: FUN_0034f808. */
/* Supplied declaration required: FUN_0034f8f8. */
/* Supplied declaration required: FUN_0034f990. */
/* Supplied declaration required: FUN_0034fc14. */
/* Supplied declaration required: FUN_003518d0. */
/* Supplied declaration required: FUN_003f6d54. */


void FUN_0032bda8(void)

{
/* irregular: 9 native warning(s); review required */
  FUN_0034f808(&DAT_004c3af8);
  FUN_0034fc14(&DAT_004c3b20);
  FUN_003518d0(&DAT_004c3b20);
  FUN_0034f990(&DAT_004c3a50);
  FUN_0034f8f8(&DAT_004c3af8);
  FUN_003f6d54(DAT_0044d024);
  DAT_0044d024 = 0;
  FUN_0034e350(&DAT_004c4080);
  if ((DAT_004c40e4 & 0xfffffffe) != 0) {
    if ((DAT_004c40e4 & 1) != 0) {
      FUN_002bce48();
    }
    FUN_002b93f0(DAT_004c40e4 & 0xfffffffe);
    DAT_004c40e4 = 0;
  }
  return;
}
