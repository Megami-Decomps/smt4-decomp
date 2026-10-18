/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b600` (_code @ 0x18b600, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00643080; /* 0x643080 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */


void FUN_0018b600(void)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter(&DAT_00643080);
  return;
}
