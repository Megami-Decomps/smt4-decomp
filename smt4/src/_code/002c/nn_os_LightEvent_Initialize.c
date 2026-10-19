/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_LightEvent_Initialize` (_code @ 0x2c5220, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
extern void nn_os_SimpleLock_Initialize(unsigned int);


void nn_os_LightEvent_Initialize(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  nn_os_SimpleLock_Initialize((unsigned int)(param_1 + 1));
  if (param_2) {
    temp_v1 = 0xfffffffe;
  }
  else {
    temp_v1 = 0xffffffff;
  }
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = temp_v1;
  return;
}
