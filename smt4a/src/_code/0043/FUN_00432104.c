/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00432104` (_code @ 0x432104, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c0ac4; /* 0x5c0ac4 */
extern int DAT_005c14c0; /* 0x5c14c0 */
extern unsigned int DAT_006430f4; /* 0x6430f4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int FUN_00432104(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Enter(&DAT_006430f4);
  temp_v0 = DAT_005c14c0;
  if (DAT_005c0ac4 == 0) {
    nn_os_CriticalSection_Leave(&DAT_006430f4);
    return -0x375f9408;
  }
  if (DAT_005c0ac4 == 1) {
    software_interrupt(0x23);
    if (DAT_005c14c0 < 0) {
      nn_os_CriticalSection_Leave(&DAT_006430f4);
      return temp_v0;
    }
    DAT_005c14c0 = 0;
  }
  DAT_005c0ac4 = DAT_005c0ac4 - 1;
  nn_os_CriticalSection_Leave(&DAT_006430f4);
  return 0;
}
