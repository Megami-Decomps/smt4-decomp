/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_Initialize` (_code @ 0x15a034, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015d6e8(unsigned int);
int wordTripleClear(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0015d6e8. */
/* Supplied declaration required: wordTripleClear. */


void nn_snd_CTR_Voice_Initialize(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  *(unsigned char *)(param_1 + 4) = 2;
  temp_v0 = 0x3f800000;
  *(unsigned int *)(param_1 + 0x18) = 0x7fd8;
  *(unsigned int *)(param_1 + 0x1c) = 0x3f800000;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)(param_1 + 7) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  wordTripleClear(param_1 + 0xc);
  *(unsigned int *)(param_1 + 100) = temp_v0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x34) = temp_v0;
  *(unsigned int *)(param_1 + 0x38) = temp_v0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  FUN_0015d6e8(*(unsigned int *)(param_1 + 0x68));
  return;
}

} /* extern "C" */
