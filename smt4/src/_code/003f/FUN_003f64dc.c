/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f64dc` (_code @ 0x3f64dc, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d4674; /* 0x4d4674 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_003f64dc(int param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  nn_os_CriticalSection_Enter(&DAT_004d4674);
  *param_2 = *(unsigned int *)(param_1 + 0x38);
  nn_os_CriticalSection_Leave(&DAT_004d4674);
  return 1;
}
