/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146650` (_code @ 0x146650, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b443c; /* 0x5b443c */
extern unsigned int DAT_0061a5f0; /* 0x61a5f0 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned char FUN_00146650(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  nn_os_CriticalSection_Enter(&DAT_0061a5f0);
  temp_v0 = DAT_005b443c != 0;
  nn_os_CriticalSection_Leave(&DAT_0061a5f0);
  return temp_v0;
}
