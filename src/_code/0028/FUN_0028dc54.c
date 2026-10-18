/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028dc54` (_code @ 0x28dc54, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0028dcc4; /* 0x28dcc4 */
extern unsigned char LAB_0028dcd4; /* 0x28dcd4 */
extern signed char DAT_0043da29; /* 0x43da29 */
extern int DAT_0043da30; /* 0x43da30 */
extern int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: FUN_00220880. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */
extern int FUN_002c5e2c(unsigned char *);


void FUN_0028dc54(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0043da29 < '\x01') {
    FUN_002c4e28(0x12);
    FUN_002c5ab8(0x12,0);
    FUN_00220880();
    if (DAT_0043da30 == 0) {
      DAT_0043da30 = FUN_002c5e2c(&LAB_0028dcc4);
    }
    if (DAT_0043da34 == 0) {
      DAT_0043da34 = FUN_002c5e2c(&LAB_0028dcd4);
    }
  }
  DAT_0043da29 = DAT_0043da29 + '\x01';
  return;
}
