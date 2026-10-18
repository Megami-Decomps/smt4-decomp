/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2f14` (_code @ 0x2e2f14, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */


void FUN_002e2f14(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_18;
  unsigned char temp_v0 [4];
  
  uStack_18 = *(unsigned int *)(param_1 + 0x44);
  puVar1 = temp_v0;
  FUN_002c40f8(puVar1,&uStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  *(unsigned char *)(param_1 + 0x48) = 1;
  nn_os_Thread_FinalizeImpl(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x44) = 0;
  }
  FUN_002c3f5c(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x4c) = 0;
  }
  return;
}
