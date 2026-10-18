/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025011c` (_code @ 0x25011c, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00465124; /* 0x465124 */

extern int nn_os_CriticalSection_Enter(unsigned int);


void FUN_0025011c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0 */
  int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = nn_os_CriticalSection_Enter(DAT_00465124);
  if ((param_3 & 0x1fffff) != 0) {
    *(unsigned int *)(temp_v0 + 0x28) = in_s0;
  }
  return;
}
