/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_LightEvent_Initialize` (_code @ 0x2c5220, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: nn_os_SimpleLock_Initialize. */


unsigned int nn_os_LightEvent_Initialize(unsigned int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  nn_os_SimpleLock_Initialize(param_1 + 1);
  if (param_2 == 0) {
    temp_v2 = 0xffffffff;
  }
  else {
    temp_v2 = 0xfffffffe;
  }
  do {
    temp_v1 = *param_1;
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = temp_v2;
  return temp_v1;
}
