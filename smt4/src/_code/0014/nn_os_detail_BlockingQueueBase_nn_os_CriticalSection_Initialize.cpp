/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Initialize` (_code @ 0x144890, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned int *);
int hasExclusiveAccess(unsigned int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
extern void nn_os_LightSemaphore_Initialize(unsigned int, int, int);


void nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Initialize
               (unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  param_1[9] = 0;
  *param_1 = param_2;
  param_1[8] = param_3;
  param_1[10] = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1 + 0xb);
  } while (!temp_v0);
  param_1[0xb] = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1 + 0xc);
  } while (!temp_v0);
  param_1[0xc] = 0;
  nn_os_LightSemaphore_Initialize((unsigned int)(param_1 + 1),0,0x7fff);
  nn_os_LightSemaphore_Initialize((unsigned int)(param_1 + 3),0,0x7fff);
  nn_os_CriticalSection_Initialize(param_1 + 5);
  return;
}

} /* extern "C" */
