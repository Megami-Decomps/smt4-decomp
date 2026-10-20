/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a4e0` (_code @ 0x15a4e0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a38(int, int);
int software_interrupt(int);

extern int DAT_005b4480; /* 0x5b4480 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00189a38. */


int FUN_0015a4e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005b4480;
  if (DAT_005b4480 == 0) {
    temp_v0 = -0x1f5f3008;
  }
  else {
    software_interrupt(0x23);
    DAT_005b4480 = 0;
  }
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x15a514);
  }
  return temp_v0;
}

} /* extern "C" */
