/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_TransferMemoryBlock_Initialize` (_code @ 0x42cfa8, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3edc(void);
int FUN_002e3140(void);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_001d3edc. */
/* Supplied declaration required: FUN_002e3140. */


void nn_os_TransferMemoryBlock_Initialize(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (unsigned int *)0x8a01bf9;
  }
  else if ((param_2 & 0xfff) != 0) {
    puVar1 = (unsigned int *)0xe0e01bf1;
  }
  else if ((param_3 & 0xfff) != 0) {
    puVar1 = (unsigned int *)0xe0e01bf2;
  }
  else {
    temp_v0 = 0;
    puVar1 = (unsigned int *)&temp_v0;
    FUN_001d3edc();
    if (-1 < (int)puVar1) {
      *(unsigned int *)(param_1 + 0x14) = temp_v0;
      *(unsigned int *)(param_1 + 8) = param_2;
      *(unsigned int *)(param_1 + 0xc) = param_3;
    }
  }
  if (-1 < (int)puVar1) {
    return;
  }
  FUN_002e3140();
  return;
}

} /* extern "C" */
