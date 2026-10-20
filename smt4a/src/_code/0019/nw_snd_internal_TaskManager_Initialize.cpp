/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskManager_Initialize` (_code @ 0x197d44, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188b60(int);
int FUN_001af264(void);
int hasExclusiveAccess(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_001af264. */


void nw_snd_internal_TaskManager_Initialize(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_00188b60(param_1 + 0x2c);
  *(int *)(param_1 + 0x38) = param_1 + 0x6c;
  *(unsigned int *)(param_1 + 0x58) = 0x20;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)(param_1 + 100));
  } while (!temp_v0);
  *(unsigned int *)(param_1 + 100) = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)(param_1 + 0x68));
  } while (!temp_v0);
  *(unsigned int *)(param_1 + 0x68) = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)(param_1 + 0x3c));
  } while (!temp_v0);
  *(unsigned int *)(param_1 + 0x3c) = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned short *)(param_1 + 0x40));
  } while (!temp_v0);
  *(unsigned short *)(param_1 + 0x40) = 0;
  *(unsigned short *)(param_1 + 0x42) = 0x7fff;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)(param_1 + 0x44));
  } while (!temp_v0);
  *(unsigned int *)(param_1 + 0x44) = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned short *)(param_1 + 0x48));
  } while (!temp_v0);
  *(unsigned short *)(param_1 + 0x48) = 0;
  *(unsigned short *)(param_1 + 0x4a) = 0x7fff;
  FUN_001af264();
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  return;
}

} /* extern "C" */
