/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a172c` (_code @ 0x1a172c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_Signal(int);
int FUN_001a0d08(int);
int FUN_002e3140(void);
int coproc_moveto_Data_Synchronization(int);
int software_interrupt(int);

extern unsigned char DAT_0064497c; /* 0x64497c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: nn_os_LightEvent_Signal. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_001a172c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(unsigned char *)(param_1 + 0xf) = 0;
    software_interrupt(0x24);
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 0x1c) = 1;
    FUN_001a0d08(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    *(unsigned char *)(param_1 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    nn_os_LightEvent_Signal(param_1 + 0x48);
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(unsigned char *)(param_1 + 0xd) = 0;
    software_interrupt(0x24);
    if (*(int *)(param_1 + 0x10) < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 0x14) = 1;
    FUN_001a0d08(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(param_1 + 0x10) = 0;
    }
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x3c) = 0xffffffff;
    DAT_0064497c = 1;
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  return;
}

} /* extern "C" */
