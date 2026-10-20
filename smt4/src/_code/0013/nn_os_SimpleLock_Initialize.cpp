/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_SimpleLock_Initialize` (_code @ 0x1395d4, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int hasExclusiveAccess(unsigned int *);

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


void nn_os_SimpleLock_Initialize(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = 1;
  return;
}

} /* extern "C" */
