/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f50c` (_code @ 0x10f50c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465600; /* 0x465600 */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned char FUN_0010f50c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  nn_os_CriticalSection_Enter(&DAT_004c6410);
  temp_v0 = DAT_00465600 != 0;
  nn_os_CriticalSection_Leave(&DAT_004c6410);
  return temp_v0;
}
