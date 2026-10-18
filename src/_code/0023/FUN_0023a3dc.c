/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a3dc` (_code @ 0x23a3dc, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00471b10; /* 0x471b10 */
extern int DAT_00472ad8; /* 0x472ad8 */
extern unsigned int DAT_004e6cd0; /* 0x4e6cd0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


int FUN_0023a3dc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002c3aa8(&DAT_004e6cd0);
  temp_v0 = DAT_00472ad8;
  if (DAT_00471b10 == 0) {
    FUN_002c3a24(&DAT_004e6cd0);
    return -0x375f9408;
  }
  if (DAT_00471b10 == 1) {
    software_interrupt(0x23);
    if (DAT_00472ad8 < 0) {
      FUN_002c3a24(&DAT_004e6cd0);
      return temp_v0;
    }
    DAT_00472ad8 = 0;
  }
  DAT_00471b10 = DAT_00471b10 - 1;
  FUN_002c3a24(&DAT_004e6cd0);
  return 0;
}
