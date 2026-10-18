/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a270` (_code @ 0x43a270, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_006462a4; /* 0x6462a4 */
extern int DAT_006462b0; /* 0x6462b0 */
extern int DAT_006462b4; /* 0x6462b4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_0043a270(void)

{
/* irregular: 3 native warning(s); review required */
  nn_os_CriticalSection_Enter(&DAT_006462a4);
  if (DAT_006462b0 < 1) {
    nn_os_CriticalSection_Leave(&DAT_006462a4);
    return 0xd8a0bbf8;
  }
  DAT_006462b0 = DAT_006462b0 - 1;
  if ((DAT_006462b0 < 1) && (DAT_006462b4 != 0)) {
    software_interrupt(0x23);
    DAT_006462b4 = 0;
  }
  nn_os_CriticalSection_Leave(&DAT_006462a4);
  return 0;
}
