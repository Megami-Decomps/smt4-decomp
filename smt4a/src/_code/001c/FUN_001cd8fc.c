/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd8fc` (_code @ 0x1cd8fc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_001cd8fc(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter(param_1 + 2);
  temp_v0 = *param_1;
  software_interrupt(0x24);
  if (-((int)temp_v0 >> 0x1f) != 0) {
    FUN_002e3140(temp_v0,-((int)temp_v0 >> 0x1f),param_3,param_4);
  }
  if ((temp_v0 & 0x3ff) != 0x3fe) {
    temp_v1 = 1;
    software_interrupt(0x19);
    if ((int)*param_1 < 0) {
      FUN_002e3140();
    }
    *(char *)((int)param_1 + 0x1319) = *(char *)((int)param_1 + 0x1319) + '\x01';
  }
  else {
    temp_v1 = 0;
  }
  nn_os_CriticalSection_Leave(param_1 + 2);
  return temp_v1;
}
