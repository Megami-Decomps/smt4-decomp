/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1bac` (_code @ 0x2a1bac, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b4070; /* 0x5b4070 */

extern unsigned int FUN_00431f04(int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_002a1bac(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = DAT_005b4070 + 0x1c;
  temp_v1 = DAT_005b4070 + 0x74;
  nn_os_CriticalSection_Enter(temp_v1);
  temp_v0 = FUN_00431f04(temp_v2);
  nn_os_CriticalSection_Leave(temp_v1);
  return temp_v0;
}
