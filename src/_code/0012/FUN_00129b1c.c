/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129b1c` (_code @ 0x129b1c, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001390c0. */
/* Supplied declaration required: FUN_0013aa8c. */
/* Supplied declaration required: FUN_0013af50. */
/* Supplied declaration required: FUN_002ad4f0. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_00129b1c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_18;
  unsigned char temp_v0 [4];
  
  *(unsigned char *)(param_1 + 0x77) = 1;
  software_interrupt(0x18);
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_002c5468();
  }
  uStack_18 = *(unsigned int *)(param_1 + 0x6c);
  puVar1 = temp_v0;
  FUN_002c42fc(puVar1,&uStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c5468();
  }
  *(unsigned char *)(param_1 + 0x70) = 1;
  FUN_002c41e8(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x6c) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x6c) = 0;
  }
  FUN_002c3aa8(param_1);
  FUN_002ad4f0();
  FUN_0013af50();
  FUN_0013aa8c(param_1 + 0x58);
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  FUN_001390c0(param_1 + 0x38);
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
  FUN_002c3a24(param_1);
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  return;
}
