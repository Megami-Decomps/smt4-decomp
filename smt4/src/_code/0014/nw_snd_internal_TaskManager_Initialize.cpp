/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskManager_Initialize` (_code @ 0x14486c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c38fc(int);
int hasExclusiveAccess(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002c38fc. */
extern void nn_os_LightSemaphore_Initialize(unsigned int, int, int);
extern void nn_os_SimpleLock_Initialize(unsigned int);


void nw_snd_internal_TaskManager_Initialize(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_002c38fc(param_1 + 0x2c);
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x38) = param_1 + 0x6c;
  *(unsigned int *)(param_1 + 0x58) = 0x20;
  *(unsigned int *)(param_1 + 0x60) = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)(param_1 + 100));
  } while (!temp_v0);
  *(unsigned int *)(param_1 + 100) = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)(param_1 + 0x68));
  } while (!temp_v0);
  *(unsigned int *)(param_1 + 0x68) = 0;
  nn_os_LightSemaphore_Initialize(param_1 + 0x3c,0,0x7fff);
  nn_os_LightSemaphore_Initialize(param_1 + 0x44,0,0x7fff);
  nn_os_SimpleLock_Initialize(param_1 + 0x4c);
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  return;
}

} /* extern "C" */
