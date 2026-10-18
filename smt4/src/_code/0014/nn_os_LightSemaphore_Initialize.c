/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_LightSemaphore_Initialize` (_code @ 0x1466c0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


void nn_os_LightSemaphore_Initialize(unsigned int *param_1,unsigned int param_2,unsigned short param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = param_2;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1 + 1);
  } while (!temp_v0);
  *(unsigned short *)(param_1 + 1) = 0;
  *(unsigned short *)((int)param_1 + 6) = param_3;
  return;
}
