/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146e08` (_code @ 0x146e08, 0x110 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_004e8510; /* 0x4e8510 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c4244. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_00146e08(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_20;
  unsigned char temp_v0 [8];
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(unsigned char *)(param_1 + 0xf) = 0;
    uStack_20 = *(unsigned int *)(param_1 + 0x18);
    puVar1 = temp_v0;
    FUN_002c42fc(puVar1,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c5468();
    }
    *(unsigned char *)(param_1 + 0x1c) = 1;
    FUN_002c41e8(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    *(unsigned char *)(param_1 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    FUN_002c4244(param_1 + 0x48);
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(unsigned char *)(param_1 + 0xd) = 0;
    uStack_20 = *(unsigned int *)(param_1 + 0x10);
    puVar1 = temp_v0;
    FUN_002c42fc(puVar1,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c5468();
    }
    *(unsigned char *)(param_1 + 0x14) = 1;
    FUN_002c41e8(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(param_1 + 0x10) = 0;
    }
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x3c) = 0xffffffff;
    DAT_004e8510 = 1;
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  return;
}
