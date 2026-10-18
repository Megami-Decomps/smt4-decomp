/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001701c0` (_code @ 0x1701c0, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00188c28. */
/* Supplied declaration required: FUN_0018b0a8. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_001a2a5c. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: nn_gxlow_CTR_Gpu_UnregisterInterruptRelayQueue. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_001701c0(int param_1)

{
/* irregular: 9 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x77) = 1;
  software_interrupt(0x18);
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_002e3140();
  }
  software_interrupt(0x24);
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(param_1 + 0x70) = 1;
  FUN_001a0d08(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x6c) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x6c) = 0;
  }
  nn_os_CriticalSection_Enter(param_1);
  FUN_001a2a5c();
  nn_gxlow_CTR_Gpu_UnregisterInterruptRelayQueue();
  FUN_0018b0a8(param_1 + 0x58);
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  FUN_00188c28(param_1 + 0x38);
  if (*(int *)(param_1 + 0x2c) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  nn_os_CriticalSection_Leave(param_1);
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  return;
}
