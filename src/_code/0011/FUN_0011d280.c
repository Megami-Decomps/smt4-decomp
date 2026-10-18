/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d280` (_code @ 0x11d280, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c14f4. */


int FUN_0011d280(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_004656b0;
  if (DAT_004656b0 == 0) {
    temp_v0 = -0x1f5f3008;
  }
  else {
    software_interrupt(0x23);
    DAT_004656b0 = 0;
  }
  if (temp_v0 < 0) {
    FUN_002c14f4(temp_v0,0x11d2b4);
  }
  return temp_v0;
}
