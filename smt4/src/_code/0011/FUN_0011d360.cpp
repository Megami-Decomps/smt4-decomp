/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d360` (_code @ 0x11d360, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c131c(int, int);
int software_interrupt(int);

extern int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c131c. */


int FUN_0011d360(void)

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
    FUN_002c131c(temp_v0,0x11d394);
  }
  return temp_v0;
}

} /* extern "C" */
