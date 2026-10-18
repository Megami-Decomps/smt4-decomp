/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004321a0` (_code @ 0x4321a0, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588114; /* 0x588114 */
extern int DAT_00588118; /* 0x588118 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_0019a5a0. */
extern unsigned int FUN_00441e1c(void);


unsigned int FUN_004321a0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00588118 != 0) {
    software_interrupt(0x23);
    DAT_00588118 = 0;
  }
  temp_v0 = FUN_00441e1c();
  if ((int)temp_v0 < 0) {
    FUN_00195fc8();
  }
  if ((temp_v0 & 0x80000000) != 0) {
    temp_v1 = 0;
  }
  else {
    if (DAT_00588114 != 0) {
      FUN_0019a5a0();
      DAT_00588114 = 0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
